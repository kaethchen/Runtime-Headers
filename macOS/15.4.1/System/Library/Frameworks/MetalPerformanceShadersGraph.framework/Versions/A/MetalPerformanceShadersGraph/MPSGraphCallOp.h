@class NSArray, NSString;

@interface MPSGraphCallOp : MPSGraphOperation {
    NSArray *_outputTypes;
    NSString *_symbolName;
    unsigned long long _inliningOption;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 outputTypes:(id)a3 symbolName:(id)a4 inliningOption:(unsigned long long)a5 name:(id)a6;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
