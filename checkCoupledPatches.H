DynamicList<label> fluidCoupledTemperaturePatchIDs(Tf.boundaryField().size())
DynamicList<label> fluidCoupledHeatFluxPatchIDs(Tf.boundaryField().size());
forAll(Tf.boundaryField(),patchI)
{
    if (Tf.boundaryField()[patchI].type() == "regionCoupleTemperature")
    {
        fluidCoupledTemperaturePatchIDs.append(patchI);
    }
    else if 
}
