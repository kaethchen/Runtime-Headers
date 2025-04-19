@class NSString, AAPSyncMetaDataProcessor, AAPSyncMetaDataSource, NSObject, AAPSyncStatePersistence;
@protocol OS_dispatch_queue;

@interface AAPSyncHandler : NSObject <AFSyncHandler, AAPSyncMetaDataSourceObserver> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    AAPSyncStatePersistence *_statePersistence;
    AAPSyncMetaDataSource *_source;
    AAPSyncMetaDataProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_checkIfResetIsNeededForKey:(id)a0 withStartAnchorString:(id)a1 validity:(id)a2 lastState:(id)a3 completion:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4 configuration:(id)a5;
- (id)currentSyncSnapshot;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (void)sourceIsReady:(id)a0;

@end
