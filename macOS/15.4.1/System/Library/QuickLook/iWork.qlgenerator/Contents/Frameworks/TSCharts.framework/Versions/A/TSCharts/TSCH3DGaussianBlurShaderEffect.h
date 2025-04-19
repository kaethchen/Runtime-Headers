@class TSCH3DShaderVariable;

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect {
    TSCH3DShaderVariable *_samplingTexcoords;
}

+ (id)variableTapUnit;
+ (id)variableTexture;
+ (void)setTapUnit:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 effectsStates:(id)a1;
+ (id)variableAccum;

- (id)init;
- (void).cxx_destruct;
- (void)addVariables:(id)a0;
- (id)variableTapUnit;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)variableTexture;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableAccum;

@end
