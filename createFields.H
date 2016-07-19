volScalarField Tf
(
    IOobject
    (
        "T"
        runTime,timeName();
        fluidMesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    fluidMesh
);

volScalarField Ts
(
    IOobject
    (
        "T"
        runTime,timeName();
        solidMesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    solidMesh
);
