@class NSString, NSXPCConnection, IRConfiguration, NSObject;
@protocol OS_dispatch_queue, IRSessionDelegate;

@interface IRSession : NSObject <IRXPCSessionClient>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) IRConfiguration *configuration;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) int token;
@property (weak, nonatomic) id<IRSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createNSXPCConnectionWithExportedObject:(id)a0 queue:(id)a1;
+ (id)_createResumedTemporaryNSXPCConnection;
+ (void)createServiceWithParameters:(id)a0 reply:(id /* block */)a1;
+ (void)databaseExportwithReply:(id /* block */)a0;
+ (void)deleteDatabaseWithReply:(id /* block */)a0;
+ (void)deleteService:(id)a0;
+ (void)getServiceTokensWithReply:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)runWithConfiguration:(id)a0;
- (void)updateCandidates:(id)a0;
- (void)_serverConnectionInterrupted;
- (void)_serverConnectionInvalidated;
- (void)_checkAndRecoverIfNeeded;
- (void)_didSpotOnLocationComplete:(id)a0;
- (void)_didUpdateBundlesWithSignificantInteractionPattern:(id)a0;
- (void)_didUpdateContext:(id)a0;
- (BOOL)_isCandidateValid:(id)a0;
- (void)_manageSessionAvailableNotificationObservation:(BOOL)a0;
- (void)_notifySessionHasFailed:(long long)a0 desc:(id)a1;
- (void)_sessionDidFailWithError:(id)a0;
- (void)addEvent:(id)a0 forCandidate:(id)a1;
- (void)deleteCandidate:(id)a0;
- (void)requestCurrentContext;
- (void)requestCurrentContextWithBundleID:(id)a0;
- (void)setSpotOnLocationWithParameters:(id)a0;
- (void)updateCandidate:(id)a0;

@end
