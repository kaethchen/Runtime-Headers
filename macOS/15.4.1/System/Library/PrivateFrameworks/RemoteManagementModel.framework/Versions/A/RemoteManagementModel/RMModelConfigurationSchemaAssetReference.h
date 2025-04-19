@class NSArray, NSString;

@interface RMModelConfigurationSchemaAssetReference : NSObject

@property (readonly, copy, nonatomic) NSArray *assetTypes;
@property (readonly, copy, nonatomic) NSString *keyPath;

+ (id)parseJSON:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetTypes:(id)a0 keyPath:(id)a1;

@end
