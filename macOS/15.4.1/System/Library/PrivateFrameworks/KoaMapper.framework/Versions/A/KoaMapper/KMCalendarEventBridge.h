@class NSString, KVItemMapper, EKEventStore;

@interface KMCalendarEventBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;

@end
