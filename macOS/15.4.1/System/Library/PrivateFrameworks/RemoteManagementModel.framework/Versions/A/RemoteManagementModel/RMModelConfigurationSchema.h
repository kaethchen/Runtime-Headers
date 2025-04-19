@class NSString, NSDictionary, NSArray, NSNumber;

@interface RMModelConfigurationSchema : NSObject

@property (class, readonly, nonatomic) NSDictionary *schemas;
@property (class, readonly, nonatomic) NSDictionary *managedSettingsSchemas;

@property (copy, nonatomic) NSString *configurationType;
@property (copy, nonatomic) NSDictionary *supportedOS;
@property (copy, nonatomic) NSArray *assetReferences;
@property (readonly, copy, nonatomic) NSNumber *version;
@property (readonly, copy, nonatomic) NSArray *managedSettings;

+ (void)loadDynamicSchemaFromDirectory:(id)a0;
+ (void)_loadDynamicSchemaFromDictionary:(id)a0 into:(id)a1 fileURL:(id)a2;
+ (void)_loadDynamicSchemaFromDirectory:(id)a0 into:(id)a1;
+ (void)_loadDynamicSchemaFromFile:(id)a0 into:(id)a1;
+ (id)_processManagedSettingsSchemas;
+ (void)loadDynamicSchemaFromFiles:(id)a0;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)_parseAssetReferences:(id)a0;
- (id)_parseManagedSettings:(id)a0;
- (BOOL)isSupportedForPlatform:(long long)a0 scope:(long long)a1;
- (BOOL)isSupportedForPlatform:(long long)a0 scope:(long long)a1 enrollmentType:(long long)a2;

@end
