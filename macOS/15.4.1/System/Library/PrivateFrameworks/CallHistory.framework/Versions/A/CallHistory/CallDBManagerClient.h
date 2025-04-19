@class CHProcessHandle, NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain, nonatomic) CHProcessHandle *currentProcessHandle;
@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (void)createPermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)createHelperConnection;
- (void)handlePermanentCreated;
- (id)initWithProcessHandle:(id)a0;
- (void)moveCallsFromTempDatabase;
- (void)pokeSyncHelperToInitDB;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (BOOL)willMoveCallsFromTempDatabase;

@end
