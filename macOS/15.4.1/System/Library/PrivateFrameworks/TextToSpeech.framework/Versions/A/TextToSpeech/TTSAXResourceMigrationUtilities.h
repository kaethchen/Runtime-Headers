@class NSDictionary, AXAssetsService;

@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService;
@property (nonatomic) BOOL isMigrationComplete;
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)attributesForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)getIdentifierForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)_readIsMigrationCompleteFromPreferences;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)a0;
- (id)_ttsAssetForSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)convertIdentifierIfNeeded:(id)a0;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)a0;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)a0;
- (void)resourceCompletedMigration:(id)a0;
- (BOOL)resourceNeedsMigration:(id)a0;
- (void)restartMigrationIfNeeded;
- (id)ttsIdentifierForLegacyMacIdentifier:(id)a0;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (void)writeIsMigrationCompleteToPreferences:(id)a0;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)a0;

@end
