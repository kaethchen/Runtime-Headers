@interface ComposerShader : ForwardDmShader {
    BOOL _dolby84;
    BOOL _forLLDovi;
    int _input_format;
    int _output_format;
}

+ (id)createShaderWithName:(id)a0 dolby84:(BOOL)a1 forLLDovi:(BOOL)a2;
+ (id)createShaderWithNameAndInputOutput:(id)a0 dolby84:(BOOL)a1 forLLDovi:(BOOL)a2 input:(int)a3 output:(int)a4;

- (id)getComputePipeLineStateForDevice:(id)a0 Library:(id)a1;
- (id)getComputePipeLineStateForDevice:(id)a0 Library:(id)a1 input:(int)a2 output:(int)a3;
- (id)initShaderWithName:(id)a0 dolby84:(BOOL)a1 forLLDovi:(BOOL)a2 input:(int)a3 output:(int)a4;

@end
