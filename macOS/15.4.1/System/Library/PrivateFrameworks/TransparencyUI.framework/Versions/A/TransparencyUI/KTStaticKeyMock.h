@class NSMutableDictionary, NSString, KTAccountPublicID, NSObject;
@protocol OS_dispatch_queue, KTNotificationCenter;

@interface KTStaticKeyMock : TransparencyStaticKey <KTStaticKeyMockProtocol>

@property (retain) NSObject<OS_dispatch_queue> *mockQueue;
@property (retain) NSObject<OS_dispatch_queue> *mockWork;
@property (retain) NSMutableDictionary *mockHandles;
@property (retain) id<KTNotificationCenter> notificationCenter;
@property (retain) KTAccountPublicID *peerID;
@property BOOL delayCode;
@property BOOL codeFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockStaticKeyWithNotificationCenter:(id)a0;
+ (id)staticKeyWithNotificationCenter:(id)a0;

- (void).cxx_destruct;
- (void)listKTSessions:(id /* block */)a0;
- (void)deleteKTSession:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByHandle:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByID:(id)a0 complete:(id /* block */)a1;
- (void)setupKTSession:(id)a0 complete:(id /* block */)a1;
- (void)codeAvailable:(id)a0 code:(id)a1;
- (void)postNotification:(id)a0 state:(id)a1;
- (void)setupCode:(id)a0;

@end
