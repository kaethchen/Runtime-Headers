@class NSString, KVItemBuilder;

@interface KMRadioStationBridge : NSObject <KMProviderDatasetBridge, KMProviderBridgeListener> {
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapListenerWithHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;

@end
