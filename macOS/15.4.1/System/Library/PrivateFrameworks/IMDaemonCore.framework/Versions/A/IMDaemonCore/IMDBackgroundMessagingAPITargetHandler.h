@class UNUserNotificationCenter, NSString, NSXPCConnection, IMDBackgroundMessagingAPIMessageRegistry, NSMutableDictionary, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue, OS_dispatch_group, IMDBackgroundMessagingAPITargetHandlerDelegate;

@interface IMDBackgroundMessagingAPITargetHandler : NSObject <IMDaemonBackgroundMessagingProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _clientPid;
    NSString *_clientBundleID;
    NSString *_clientAppName;
    NSString *_appDescription;
    UNUserNotificationCenter *_notificationCenter;
    RBSProcessMonitor *_processMonitor;
    BOOL _processMonitorDeliveredFirstUpdate;
    NSObject<OS_dispatch_group> *_processMonitorWaitingForInitialStateGroup;
    BOOL _canSend;
    IMDBackgroundMessagingAPIMessageRegistry *_messageRegistry;
    NSMutableDictionary *_trackedMessages;
    NSMutableDictionary *_trackedRecipientHandles;
}

@property (retain, nonatomic) id<IMDBackgroundMessagingAPITargetHandlerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearConnection;
- (void)checkAuthorizationStatusForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)requestBackgroundMessagingAuthorizationForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundMessage:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (id)_formattedPhoneNumberForNumber:(id)a0;
- (void)_sendMessageText:(id)a0 toHandle:(id)a1 onService:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldThrottleMessageToRecipient:(id)a0;
- (void)handleSMSSendResult:(id)a0 sent:(BOOL)a1;
- (id)initWithXPCConnection:(id)a0 targetQueue:(id)a1 delegate:(id)a2;
- (void)postNotificationForRecipientHandle:(id)a0;

@end
