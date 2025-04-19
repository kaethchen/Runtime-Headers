@class NSObject, RPCompanionLinkDevice, NSMutableArray, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface RTTRemoteCall : RTTCall {
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) RPCompanionLinkDevice *pairedCallDevice;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (BOOL)isLocallyHosted;
- (id)initWithCall:(id)a0;
- (void)sendString:(id)a0;
- (BOOL)_rapportDevice:(id)a0 matchesID:(id)a1 orAlternateID:(id)a2;
- (void)callDidReceiveText:(id)a0 forUtterance:(id)a1;
- (void)resetRapportClientAndInvalidate:(BOOL)a0;
- (id)responseForRequest:(id)a0 options:(id)a1;
- (void)sendCallIDChallengeToDevice:(id)a0;
- (void)sendCallIDChallengeToDeviceId:(id)a0 orAlternateId:(id)a1;
- (void)setupRapportClient;
- (void)updateCallWithRemoteFailure;

@end
