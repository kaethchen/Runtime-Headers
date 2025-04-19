@class HDNotificationInstructionManager, NSString, HDProfile;

@interface HDNotificationSyncManager : NSObject <HDHealthDaemonReadyObserver, HDNotificationInstructionSyncServiceObserver> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationInstructionManager *notificationInstructionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)daemonReady:(id)a0;
- (void)nanoSyncManagerDidReceiveNotificationInstructionRequest:(id)a0 receivedDate:(id)a1 sendingDeviceName:(id)a2 completion:(id /* block */)a3;
- (void)notificationInstructionSyncService:(id)a0 didReceiveNotificationInstruction:(id)a1;
- (BOOL)sendNotificationInstructionMessage:(id)a0 error:(id *)a1;

@end
