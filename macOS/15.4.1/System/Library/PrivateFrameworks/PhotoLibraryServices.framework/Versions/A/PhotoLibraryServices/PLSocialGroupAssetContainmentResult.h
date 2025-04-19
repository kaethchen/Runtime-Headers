@class NSSet;

@interface PLSocialGroupAssetContainmentResult : NSObject

@property (readonly, nonatomic) NSSet *inclusiveAssetIDs;
@property (readonly, nonatomic) NSSet *exclusiveAssetIDs;

- (void).cxx_destruct;
- (id)initWithInclusiveAssetIDs:(id)a0 exclusiveAssetIDs:(id)a1;

@end
