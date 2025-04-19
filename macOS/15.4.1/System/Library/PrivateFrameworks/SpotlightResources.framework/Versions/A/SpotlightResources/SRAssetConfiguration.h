@class NSMutableDictionary, NSMutableSet;

@interface SRAssetConfiguration : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_contentTypeMap;
    NSMutableDictionary *_clientMap;
    NSMutableDictionary *_deliveryTypeMap;
    NSMutableSet *_deliveryTypes;
}

+ (id)configuration;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)assetTypes;
- (id)contentTypesForClient:(id)a0;
- (void)setProperties:(id)a0 client:(id)a1;

@end
