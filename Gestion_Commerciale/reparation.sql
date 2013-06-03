-- SCRIPT DE CREATION DE LA BASE DE DONNÉES, BOULOUK HUGO LE 16 MAI 2013
DROP TABLE IF EXISTS VEHICULE, REPARATION, UTILISER, PIECE;

CREATE TABLE VEHICULE(
noImmat		VARCHAR(11) PRIMARY KEY,
type 		VARCHAR(30),
carburant 	VARCHAR(30),
marque		VARCHAR(30),
couleur		VARCHAR(30)
);

CREATE TABLE REPARATION(
numero		INTEGER PRIMARY KEY,
date		DATE,
nbHeuresMO	SMALLINT,
noImmatVehicule	VARCHAR(11)
);

CREATE TABLE UTILISER(
noPiece 	INTEGER,
noReparation	INTEGER,
qte		INTEGER,
PRIMARY KEY(noPiece,noReparation)
);

CREATE TABLE PIECE(
numero		INTEGER PRIMARY KEY,
libelle		VARCHAR(30),
pu		FLOAT
);

ALTER TABLE REPARATION
ADD FOREIGN KEY (noImmatVehicule) REFERENCES VEHICULE(noImmat);

ALTER TABLE UTILISER
ADD FOREIGN KEY (noReparation) REFERENCES REPARATION(numero),
ADD FOREIGN KEY (noPiece) REFERENCES PIECE(numero);

INSERT INTO VEHICULE VALUES
('AA-111-AA05','Megane','Diesel','Renault','Grise'),
('AA-111-AB05','Cooper','Diesel','Mini','Rouge'),
('AA-111-AC05','Q5','Diesel','BMW','Noire'),
('AA-111-AD05','Picnic','Diesel','Toyota','Grise');

INSERT INTO PIECE VALUES
('1','Pneu Continental 15','95.67'),
('2','Joinculas Renault','20'),
('3','Phare','50.99'),
('4','Pare-Brise avec teinture antivis-a-vis','230.99'),
('5','Poste radio-cassette','19.93');

INSERT INTO REPARATION VALUES
('1','2013-02-02','3','AA-111-AA05'),
('2','2013-02-03','5','AA-111-AC05');

INSERT INTO UTILISER VALUES
('2','1','3'),
('1','2','4');
