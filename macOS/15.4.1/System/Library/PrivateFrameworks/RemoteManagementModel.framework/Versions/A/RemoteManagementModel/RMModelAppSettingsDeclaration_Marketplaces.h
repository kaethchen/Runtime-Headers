@class NSSet, NSNumber, NSArray;

@interface RMModelAppSettingsDeclaration_Marketplaces : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSArray *payloadAllowedMarketplaceApps;
@property (copy, nonatomic) NSArray *payloadDeniedMarketplaceApps;

+ (id)buildRequiredOnly;
+ (id)buildWithEnabled:(id)a0 allowedMarketplaceApps:(id)a1 deniedMarketplaceApps:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
