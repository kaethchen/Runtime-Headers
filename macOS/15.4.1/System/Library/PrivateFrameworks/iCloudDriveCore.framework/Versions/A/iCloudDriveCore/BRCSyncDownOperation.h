@class NSString, BRCServerZone, BRCSyncDownHandler;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    BRCSyncDownHandler *_syncDownHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_fetchInitialZoneIfNecessaryWithCreatedZone:(id)a0;
- (void)_performAfterFetchingRecordChanges:(id /* block */)a0;
- (void)_saveInitialServerZoneData:(id)a0 clientChangeTokenData:(id)a1;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;
- (void)_startSyncDown;
- (BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)a0;
- (id)initDeltaSyncWithServerZone:(id)a0 sessionContext:(id)a1 syncDownHandler:(id)a2;

@end
