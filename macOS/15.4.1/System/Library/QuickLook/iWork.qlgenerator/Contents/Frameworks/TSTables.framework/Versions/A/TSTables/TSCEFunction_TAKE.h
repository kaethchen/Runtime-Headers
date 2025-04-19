@interface TSCEFunction_TAKE : TSCEFunctionNode

+ (id)subGrid:(id)a0 inputGrid:(id)a1 startAtCoord:(struct TSCEGridCoord { unsigned int x0; unsigned int x1; })a2 endAtCoord:(struct TSCEGridCoord { unsigned int x0; unsigned int x1; })a3 inputSize:(struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })a4 resultSize:(struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })a5;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
