@class TSCH3DShaderVariable;

@interface TSCH3DExternalLabelAttribute : NSObject

@property (retain, nonatomic) TSCH3DShaderVariable *variable;
@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } value;

+ (id)attributeWithVariable:(id)a0 value:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a1;

- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithVariable:(id)a0 value:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a1;

@end
