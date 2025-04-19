@class NSString, KVItemBuilder;

@interface KMLanguageModelBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_languageCode;
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)_getItemWithTokenID:(unsigned int)a0 dynamicToken:(id)a1 error:(id *)a2;

@end
