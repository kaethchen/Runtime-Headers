@class NSDictionary, NSMutableSet;

@interface CESRAppEntityConfig : NSObject {
    NSDictionary *_appEntityMapping;
    NSDictionary *_assistantSchemaMapping;
    NSMutableSet *_supportedLmeTemplates;
    NSDictionary *_bundleIdToLimit;
    unsigned long long _overallAppEntityLimit;
    unsigned long long _allocationStrategy;
    unsigned long long _proportionTransformationFunction;
    BOOL _interactionStoreRankingEnabled;
    float _proportionTransformationAlpha;
}

+ (id)_appEntityMappingFromSupportedFirstPartyEntities:(id)a0 bundleIdToLimit:(id)a1 supportedLmeTemplates:(id)a2;
+ (id)_assistantSchemaMappingFromSupportedAssistantSchemaTypes:(id)a0 supportedLmeTemplates:(id)a1;
+ (id)_parseThirdPartyBundleLimits:(id)a0;

- (void).cxx_destruct;
- (BOOL)isAssistantSchemaTypeSupported:(id)a0;
- (id)_appEntityMapping;
- (id)_bundleIdToLimit;
- (BOOL)_parseJsonObject:(id)a0;
- (void)_setAppEntityMapping:(id)a0;
- (void)_setAssistantSchemaMapping:(id)a0;
- (void)_setBundleIdToLimit:(id)a0;
- (unsigned long long)allocationStrategy;
- (id)appEntityMappingForAssistantSchemaType:(id)a0;
- (id)appEntityMappingForBundleId:(id)a0 appEntityName:(id)a1;
- (id)initWithJsonObject:(id)a0;
- (BOOL)interactionStoreRankingEnabled;
- (BOOL)isBundleIdSupported:(id)a0;
- (id)limitForBundleId:(id)a0;
- (unsigned long long)overallAppEntityLimit;
- (float)proportionTransformationAlpha;
- (unsigned long long)proportionTransformationFunction;
- (id)supportedLmeTemplates;

@end
