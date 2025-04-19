@class NSUUID, SHMatcherRequest, NSString, SHSession, SHCatalog;
@protocol SHManagedSessionDelegate, SHPreparableMatcher;

@interface SHManagedSession : NSObject <SHSessionDelegate_Internal>

@property (class, readonly) BOOL isLiveActivityAvailable;

@property (readonly) NSUUID *sharedRequestID;
@property (readonly) SHSession *session;
@property (readonly) id<SHPreparableMatcher> shazamServiceConnection;
@property (retain) SHMatcherRequest *inflightRequest;
@property (copy) id /* block */ completionHandler;
@property BOOL sendNotifications;
@property (readonly) BOOL isMatching;
@property (weak) id<SHManagedSessionDelegate> delegate;
@property BOOL enableLiveActivity;
@property (readonly) SHCatalog *catalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (id)initWithCatalog:(id)a0;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;
- (void)stopMatchingAmbientAudioSnippet;
- (void)didCalculateSpectralData:(id)a0;
- (void)ensureCallerHasRecordTCCWithCompletionHandler:(id /* block */)a0;
- (void)finishedSession:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2 serviceConnection:(id)a3;
- (id)initWithPartnerName:(id)a0;
- (BOOL)isUsingCustomCatalog:(id)a0;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;
- (void)matchWithCallback:(id /* block */)a0;
- (void)prepareMatchWithPreparedCallback:(id /* block */)a0 withCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 didProduceResponse:(id)a1;
- (BOOL)session:(id)a0 shouldAttemptToMatchSignature:(id)a1;
- (void)singleMatchWithCompletionHandler:(id /* block */)a0;

@end
