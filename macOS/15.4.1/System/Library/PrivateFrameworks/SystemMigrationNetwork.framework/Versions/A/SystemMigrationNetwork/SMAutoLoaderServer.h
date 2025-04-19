@class NSMutableDictionary, NSString, NSURL, NSObject, SMNNetworkSession;
@protocol OS_dispatch_queue;

@interface SMAutoLoaderServer : NSObject <SMNNetworkSessionDelegateProtocol>

@property (retain) NSMutableDictionary *txtRecord;
@property (retain) NSObject<OS_dispatch_queue> *requestQueue;
@property BOOL networkServerShouldBeUp;
@property (retain) NSURL *systemPath;
@property (retain) SMNNetworkSession *session;
@property (retain) NSString *secretPassword;
@property (copy) id /* block */ statusUpdateBlock;

+ (BOOL)canGenerateValidTXTRecordForSourcePath:(id)a0;
+ (id)sha256hashString:(id)a0 withSalt:(id)a1;
+ (id)supportedCommandIDs;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)start;
- (void)stop;
- (id)initWithName:(id)a0 usingSourcePath:(id)a1;
- (id)localCertificates;
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
- (BOOL)shouldAcceptPeerCertificates:(id)a0;
- (void)generateTXTRecord;
- (id)actionFromStream:(id)a0;
- (id)getNWUUID;
- (void)handleAction:(id)a0 fromStream:(id)a1;
- (id)initWithName:(id)a0 usingSourcePath:(id)a1 type:(id)a2 usingSSL:(BOOL)a3;

@end
