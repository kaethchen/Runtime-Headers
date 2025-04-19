@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, SMDUtilitiesProtocol;

@interface SMUtilities_Client : NSObject <SMSystemScannerClient, MigrationUtilitiesEventsListener>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDUtilitiesProtocol> daemonProxy;
@property (copy) id /* block */ deletionProgressHandler;
@property (copy) id /* block */ otherUserSizeProgressHandler;
@property (retain) NSObject<OS_dispatch_queue> *deletionQueue;
@property (retain) NSObject<OS_dispatch_queue> *deletionProgressQueue;
@property (retain) NSObject<OS_dispatch_queue> *otherUserSizeQueue;
@property (retain) NSObject<OS_dispatch_queue> *otherUserSizeProgressQueue;
@property (readonly) unsigned long long requestedClientScannerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)utilitiesEventsListenerInterface;

- (id)init;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)cleanupPreviousSystemWithAuthorization:(struct { char x0[32]; })a0 completionBlock:(id /* block */)a1 andProgressBlock:(id /* block */)a2;
- (BOOL)clearUserMigratedMark;
- (void)cumulativeDeletedFiles:(unsigned long long)a0 andByteCount:(unsigned long long)a1;
- (void)cumulativeOtherUsersSize:(unsigned long long)a0;
- (int)lockVolumeKeybagForUID:(unsigned int)a0;
- (void)obtainTotalSizeOfOtherUsersOnSystemWithCompletionBlock:(id /* block */)a0 andProgressBlock:(id /* block */)a1 recalculationPermitted:(BOOL)a2;
- (void)obtainTotalSizeOfOtherUsersOnSystemWithCompletionBlock:(id /* block */)a0 userFilterBlock:(id /* block */)a1 andProgressBlock:(id /* block */)a2 recalculationPermitted:(BOOL)a3;
- (BOOL)prepareToShove;
- (BOOL)prepareToShoveAndRunTemplateMigration;
- (int)unlockVolumeKeybagForUID:(unsigned int)a0 withACM:(id)a1;

@end
