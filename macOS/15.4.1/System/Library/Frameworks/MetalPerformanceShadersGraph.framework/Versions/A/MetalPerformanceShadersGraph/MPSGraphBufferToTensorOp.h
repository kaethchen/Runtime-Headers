@class NSArray;

@interface MPSGraphBufferToTensorOp : MPSGraphOperation {
    NSArray *_shape;
    NSArray *_interleave;
    unsigned int _type;
    BOOL _isTensorBufferOp;
    BOOL _isChannelAndInterleaveSame;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 shape:(id)a3 type:(unsigned int)a4 interleave:(id)a5 isTensorBufferOp:(BOOL)a6 isChannelAndInterleaveSame:(BOOL)a7 name:(id)a8;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
