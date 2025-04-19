@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (id)loadRequestIdsToAudioIdsMapping;
- (void)applyContentsToVoiceProfileStorePrefs:(id)a0;
- (id)getAllContentsOfVoiceProfileStorePrefs;
- (long long)getVoiceProfileStoreVersion;
- (id)loadEnrollmentSamplingMetaDataDict;
- (id)loadKnownUserVoiceProfiles;
- (void)saveEnrollmentSamplingMetaDataDict:(id)a0;
- (void)saveKnownUserVoiceProfiles:(id)a0;
- (void)saveRequestIdsToAudioIdsMapping:(id)a0;
- (void)setVoiceProfileStoreVersion:(unsigned long long)a0;

@end
