@class KVItemMapper, NSString, KMIntentVocabularyStoreManager, KMIntentVocabularyAuthorization;

@interface KMIntentVocabularyDatasetBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_appId;
    NSString *_intentSlot;
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
    unsigned short _cascadeItemType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)initWithAppId:(id)a0 intentSlot:(id)a1 storeManager:(id)a2 authorization:(id)a3 itemMapper:(id)a4;
- (BOOL)_resolveCascadeItemType;

@end
