fvMesh fluidMesh
(
    IOobject
    (
         "fluid"
         runTime,timeName(),
         runTime,
         IOobject::MUST_READ
    )
);

fvMesh solidMesh
(
    IOobject
    (
         "solid"
         runTime,timeName(),
         runTime,
         IOobject::MUST_READ
    )
);
