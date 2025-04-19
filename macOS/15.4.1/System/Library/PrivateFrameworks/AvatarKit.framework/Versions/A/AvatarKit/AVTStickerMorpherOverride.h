@class NSString;

@interface AVTStickerMorpherOverride : NSObject

@property (readonly, copy, nonatomic) id nodeNames;
@property (readonly, copy, nonatomic) NSString *morphTargetName;
@property (readonly, nonatomic) float weight;

+ (id)morpherOverrideFromDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)applyToAvatar:(id)a0 inHierarchy:(id)a1 reversionContext:(id)a2;
- (id)initWithNodeNames:(id)a0 morphTargetName:(id)a1 weight:(float)a2;

@end
