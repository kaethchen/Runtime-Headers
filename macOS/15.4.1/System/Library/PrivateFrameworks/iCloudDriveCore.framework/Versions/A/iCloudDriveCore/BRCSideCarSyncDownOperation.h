@class NSString, CKServerChangeToken, BRCSideCarSyncDownHandler;

@interface BRCSideCarSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken *_serverChangeToken;
    BRCSideCarSyncDownHandler *_syncDownHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_createSyncDownOperation;
- (void)_createZone;
- (id)initWithSession:(id)a0 changeToken:(id)a1 syncDownHandler:(id)a2;

@end
