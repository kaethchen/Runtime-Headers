@class NSString, NEConfigurationManager, NEConfiguration, NSMutableArray;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>

@property (readonly) NSString *clientName;
@property (readonly) NSString *payloadType;
@property (readonly) NEConfigurationManager *manager;
@property (readonly) struct AuthorizationOpaqueRef { } *authorization;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;

+ (id)getServiceIDForPayload:(id)a0;
+ (void)profileMigrationComplete;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)findConfigurationByPayloadUUID:(id)a0;
- (id)copyManagedConfigurationIDs;
- (BOOL)createConfigurationFromPayload:(id)a0 payloadType:(id)a1;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (id)findConfigurationByConfigurationID:(id)a0;
- (id)findConfigurationByName:(id)a0;
- (id)getCertificatesForConfigurationWithIdentifier:(id)a0;
- (id)initWithNameAndAuthorization:(id)a0 authorization:(struct AuthorizationOpaqueRef { } *)a1;
- (id)initWithNameAndType:(id)a0 payloadType:(id)a1;
- (BOOL)isInstalled:(id)a0;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (BOOL)lockConfigurations;
- (void)removeAllConfigurationsWithPayload:(id)a0 profile:(id)a1;
- (BOOL)removeConfiguration:(id)a0;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (BOOL)removeIngestedConfiguration;
- (void)removeOrphanConfigurations:(id)a0 profileUUID:(id)a1;
- (BOOL)saveIngestedConfiguration;
- (BOOL)saveIngestedConfiguration:(id *)a0;
- (id)setAsideConfigurationName:(id)a0 unsetAside:(BOOL)a1;
- (void)unlockConfigurations;
- (BOOL)updateAccountIdentifiers:(id)a0;
- (BOOL)updateAppLayerVPNMappingRules:(id)a0;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateManagedAppRules:(id)a0;
- (BOOL)updatePerAppMappingRules:(id)a0;

@end
