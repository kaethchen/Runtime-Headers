@class NSString, CKServerChangeToken, NSMutableDictionary, NSMutableArray;
@protocol BRCHealthCheckUpdatesCallbackProtocol;

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
    id<BRCHealthCheckUpdatesCallbackProtocol> _healthCheckUpdatesCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)a0 error:(id)a1;
- (id)initWithSessionContext:(id)a0 changeToken:(id)a1 healthCheckUpdatesCallback:(id)a2;
- (void)receivedUpdatedServerChangeToken:(id)a0 requestID:(unsigned long long)a1;

@end
