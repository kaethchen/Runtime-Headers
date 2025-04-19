@class SCNMaterialProperty;

@interface OKSCNDoubleSidedMaterial : SCNMaterial

@property (retain, nonatomic) SCNMaterialProperty *backDiffuse;

+ (id)new;
+ (id)material;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
