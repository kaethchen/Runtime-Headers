@class NSString, NSArray;

@interface KMAppGlobalVocabularyBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_appId;
    unsigned short _cascadeItemType;
    NSArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)initWithOriginAppId:(id)a0 cascadeItemType:(unsigned short)a1 items:(id)a2;

@end
