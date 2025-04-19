@class NSSet, MRGroupSessionXPCConnection, NSObject, MRGroupSessionInfo;
@protocol OS_dispatch_queue, MRGroupSessionDiscoveryDelegate;

@interface MRGroupSessionDiscovery : NSObject <MRGroupSessionDiscoveryClientXPCProtocol>

@property (retain, nonatomic) MRGroupSessionXPCConnection *connection;
@property (readonly, weak, nonatomic) id<MRGroupSessionDiscoveryDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSSet *discoveredSessions;
@property (retain, nonatomic) MRGroupSessionInfo *activeSession;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)initializeConnection;
- (void)activeSessionDidChange:(id)a0;
- (void)discoveredSessionsDidChange:(id)a0;
- (void)handleDidRestoreConnectionNotification;
- (void)notifyDelegateWithActiveSession:(id)a0;
- (void)notifyDelegateWithDiscoveredSessions:(id)a0;
- (void)registerNotifications;

@end
