@class NSArray, NSMutableDictionary, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AAPSyncMetaDataProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_metaData;
    unsigned long long _lastChangeOffset;
    NSMutableDictionary *_appInfoCache;
    unsigned long long _appInfoCacheStart;
    unsigned long long _appInfoCacheEnd;
    NSCondition *_appInfoCacheCheck;
}

- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)_queue_processNextChange:(id)a0 afterAnchor:(id)a1 withInitialAnchor:(id)a2;
- (void)_queue_updateCache;
- (void)processNextChange:(id)a0 afterAnchor:(id)a1;

@end
