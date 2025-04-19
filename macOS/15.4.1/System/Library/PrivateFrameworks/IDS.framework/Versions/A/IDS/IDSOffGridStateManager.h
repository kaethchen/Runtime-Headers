@class IDSXPCDaemonController, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, IDSOffGridStateManagerDelegate;

@interface IDSOffGridStateManager : NSObject <IDSXPCOffGridStateManagerClient>

@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController_sync;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableSet *invitedHandles;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IDSOffGridStateManagerDelegate> delegate;
@property (readonly, nonatomic) long long offGridStatus;
@property (readonly, nonatomic) long long offGridState;
@property (readonly, nonatomic) long long offGridMode;
@property (readonly, nonatomic) long long publishStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)disconnectStewieWithCompletion:(id /* block */)a0;
- (void)fetchContactsOfType:(long long)a0 completion:(id /* block */)a1;
- (void)_daemonControllerSetup;
- (void)_setupInterruptionHandler;
- (void)_setupXPC;
- (void)connectStewieWithCompletion:(id /* block */)a0;
- (void)contactInfoUpdated:(id)a0;
- (void)fetchStewieAvailabilityWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 error:(id *)a1;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 withDictionaryPayload:(id)a2 completion:(id /* block */)a3;
- (void)invitedHandlesWithCompletion:(id /* block */)a0;
- (void)offGridModeUpdated:(long long)a0 publishStatus:(long long)a1 error:(id)a2;
- (void)removeAllInvitedHandlesWithCompletion:(id /* block */)a0;
- (void)removeInvitedHandles:(id)a0 completion:(id /* block */)a1;
- (void)setOffGridMode:(long long)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)setOffGridStatus:(long long)a0 options:(id)a1 completion:(id /* block */)a2;

@end
