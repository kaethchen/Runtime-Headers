@class NSString, CALayer;

@interface NCMaterialLayer : CALayer {
    NSString *_groupName;
    CALayer *_backdropLayer;
    CALayer *_tintLayer;
}

@property (class, readonly, nonatomic) BOOL useDarkLook;

@property (nonatomic) unsigned long long material;
@property (nonatomic) unsigned char materialStyle;

+ (void)initialize;

- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buildVibrantLayerTree:(unsigned long long)a0;
- (id)initWithMaterial:(unsigned long long)a0 groupName:(id)a1 style:(unsigned char)a2;

@end
