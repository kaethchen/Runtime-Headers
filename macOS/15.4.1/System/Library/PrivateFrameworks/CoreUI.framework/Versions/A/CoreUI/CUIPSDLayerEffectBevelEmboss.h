@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent

@property unsigned long long blurSize;
@property unsigned long long softenSize;
@property short angle;
@property unsigned long long altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor *highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor *shadowColor;
@property double shadowOpacity;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
