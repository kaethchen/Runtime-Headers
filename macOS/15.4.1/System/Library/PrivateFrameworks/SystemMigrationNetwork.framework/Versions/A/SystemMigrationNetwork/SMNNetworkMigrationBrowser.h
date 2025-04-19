@class NSMutableDictionary, NSString, NSObject, SMNNetworkSession;
@protocol OS_dispatch_queue;

@interface SMNNetworkMigrationBrowser : NSObject <SMNNetworkSessionDelegateProtocol>

@property (copy) id /* block */ systemAppearedBlock;
@property (copy) id /* block */ systemDisappearedBlock;
@property (retain) SMNNetworkSession *session;
@property struct __SecIdentity { } *localIdentity;
@property (retain) NSMutableDictionary *serviceToTxtRecordMap;
@property (retain) NSObject<OS_dispatch_queue> *serviceMapQueue;
@property BOOL useSSL;
@property BOOL allowLocalNetworkServer;
@property BOOL automaticallySeeksFastestConnection;
@property (retain) NSString *secretPassword;

+ (void)addLocalInstanceName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithSystemAppearedBlock:(id /* block */)a0 andSystemDisappearedBlock:(id /* block */)a1;
- (void)session:(id)a0 benchmarkedSoftAP:(double)a1 infrastructureSample:(double)a2;
- (void)session:(id)a0 didFailConnectionToPeerNamed:(id)a1;
- (void)session:(id)a0 discoveredPeerNamed:(id)a1;
- (void)session:(id)a0 failedToResolvePeerNamed:(id)a1 errorCode:(long long)a2;
- (void)session:(id)a0 finishedSamplingConnection:(id)a1;
- (void)session:(id)a0 newIncomingStream:(id)a1;
- (void)session:(id)a0 peerDisappeared:(id)a1;
- (void)session:(id)a0 peerNamed:(id)a1 updatedTxtRecord:(id)a2;
- (void)session:(id)a0 promotedNewConnectionToActive:(id)a1;
- (void)session:(id)a0 resolvedPeerNamed:(id)a1 txtRecord:(id)a2;
- (BOOL)session:(id)a0 shouldAcceptPeerWithAddress:(id)a1;
- (void)session:(id)a0 streamClosing:(id)a1;
- (void)sessionDetectedNetworkConfigurationChanged:(id)a0;
- (void)sessionDeterminingFastestConnection:(id)a0;
- (void)sessionHasFasterConnectionAvailable:(id)a0;
- (void)sessionInterrupted:(id)a0 connection:(id)a1 active:(BOOL)a2 didReplaceActiveConnection:(BOOL)a3;
- (void)sessionIsActive:(id)a0;
- (id)_decodedTxtRecordWithMyStringKeys:(id)a0;
- (void)sessionIsInterrupted:(id)a0;
- (void)startWithType:(id)a0;

@end
