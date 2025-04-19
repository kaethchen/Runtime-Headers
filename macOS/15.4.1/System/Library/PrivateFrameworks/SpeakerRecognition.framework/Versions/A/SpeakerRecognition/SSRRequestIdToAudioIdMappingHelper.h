@class SSRVoiceProfileStorePrefs;

@interface SSRRequestIdToAudioIdMappingHelper : NSObject

@property (retain, nonatomic) SSRVoiceProfileStorePrefs *storePrefs;

+ (id)_convertNestedDictionaryToMutable:(id)a0;
+ (id)_loadRequestIdToAudioIdMappingFromPlist;
+ (void)_writeMappingIntoPlist:(id)a0;
+ (id)getAudioIdWithRequestId:(id)a0 languageCode:(id)a1 date:(id)a2 error:(id *)a3;
+ (id)getRequestIdsForLocale:(id)a0 date:(id)a1 error:(id *)a2;
+ (void)purgeAllEntriesInSpkeakerIdBiome;
+ (void)removeMapping;
+ (void)removeMappingOnAndBefore:(id)a0 completion:(id /* block */)a1;
+ (void)removeMappingWithLocale:(id)a0 completion:(id /* block */)a1;
+ (void)removeMappingWithLocale:(id)a0 date:(id)a1 completion:(id /* block */)a2;
+ (void)writeIntoMappingWithRequestId:(id)a0 audioId:(id)a1 date:(id)a2 locale:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;

@end
