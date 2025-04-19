@class NSDictionary, NSString;

@interface CARemoteEffect : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *animations;
@property (nonatomic) unsigned long long effectID;
@property (nonatomic) unsigned long long layerRenderID;
@property (readonly, copy) NSString *name;
@property (copy) NSString *baseState;
@property (copy) NSString *overrideState;
@property double blendFactor;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)defaultValueForKey:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAnimation:(id)a0 fromState:(id)a1 toState:(id)a2;
- (BOOL)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(BOOL)a1;
- (void)_setEffectId:(unsigned long long)a0;
- (void)_setLayerRenderId:(unsigned long long)a0;
- (id)animationFromState:(id)a0 toState:(id)a1;
- (BOOL)shouldArchiveValueForKey:(id)a0;

@end
