@interface SSRVoiceProfileRetrainerFactory : NSObject

- (id)init;
- (id)_fetchSecureAssetForCommunalDevice:(id)a0;
- (id)_fetchSecureAssetForNonCommunalDevice:(id)a0;
- (id)_secureAssetWithAssetResourcePathURL:(id)a0 assetFileName:(id)a1;
- (id)voiceRetrainersWithContext:(id)a0;

@end
