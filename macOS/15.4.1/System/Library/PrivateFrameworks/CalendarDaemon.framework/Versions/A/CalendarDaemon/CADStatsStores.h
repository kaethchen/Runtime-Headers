@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsStores : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_storeInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (void)processStores:(id)a0;
- (BOOL)wantsStores;

@end
