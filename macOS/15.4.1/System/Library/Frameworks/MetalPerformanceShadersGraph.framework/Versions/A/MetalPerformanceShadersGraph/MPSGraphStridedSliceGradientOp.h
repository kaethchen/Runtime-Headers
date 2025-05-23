@interface MPSGraphStridedSliceGradientOp : MPSGraphOperation {
    unsigned int _begin_mask;
    unsigned int _end_mask;
    unsigned int _shrink_axis_mask;
    BOOL _end_is_size;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 startMask:(unsigned int)a3 endMask:(unsigned int)a4 shrinkAxisMask:(unsigned int)a5 endIsSize:(BOOL)a6 name:(id)a7;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
