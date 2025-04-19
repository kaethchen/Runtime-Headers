@class NSDictionary, NSString, NSSet;

@interface SRAssetType : NSObject

@property (copy, nonatomic) NSDictionary *deliveryTypeMap;
@property (copy, nonatomic) NSDictionary *contentTypeMap;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *xpcName;
@property (nonatomic) long long compatibilityVersion;
@property (copy, nonatomic) NSSet *deliveryTypes;

- (void).cxx_destruct;
- (id)contentTypes;

@end
