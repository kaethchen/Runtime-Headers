@class NSSet, NSString, KVItemMapper;

@interface KMAppGlobalVocabularyMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    NSSet *_modifiedAppIds;
    NSString *_languageCode;
    KVItemMapper *_itemMapper;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)_extractAllAppIntentVocabularyForApp:(id)a0 languageCode:(id)a1;
- (id)_extractAllAppIntentVocabularyFromBundle:(struct __CFBundle { } *)a0 languageCode:(id)a1;
- (id)_sortAppIntentVocabularyByCascadeItemType:(id)a0;
- (id)initWithModifiedOriginAppIds:(id)a0 languageCode:(id)a1;

@end
