@class NSString, PARSession, NSArray, NSSet, PRSFeedbackProxy, NSDictionary, NSMutableArray, NSObject, SSPlistDataReader;
@protocol SFFeedbackListener, PRSSessionController, OS_dispatch_source, OS_dispatch_queue;

@interface PRSSearchSession : NSObject <PARSessionDelegate> {
    NSMutableArray *_feedback;
    id<PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    BOOL _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
}

@property (retain) PARSession *session;
@property (retain) NSString *userAgent;
@property BOOL configuredSession;
@property (retain) NSObject<OS_dispatch_source> *quiescenceTimer;
@property double retryAfter;
@property (readonly, nonatomic) id<SFFeedbackListener> listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) double sessionStartTime;
@property (readonly, nonatomic) double searchRenderTimeout;
@property (readonly, nonatomic) double suggestionsRenderTimeout;
@property (readonly, nonatomic) NSArray *supportedServices;
@property (readonly, nonatomic) NSSet *appBlocklist;
@property (readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property (readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
@property (readonly, nonatomic) NSString *modelL2Version;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentInputMethod;
+ (id)currentKeyboardLayout;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)warmup;
- (id)queryTaskWithString:(id)a0 externalId:(unsigned int)a1 handler:(id)a2 queryContext:(id)a3 queryIdent:(unsigned long long)a4;
- (id)feedbackListener;
- (void)getFTEStringsWithReply:(id /* block */)a0;
- (id)initWithClient:(id)a0 clientQueue:(id)a1;
- (void)setParsecFeedbackAllowed:(BOOL)a0;
- (void)setUserAgentString:(id)a0;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (id)resourceWithID:(id)a0;
- (void)queryCompleted:(id)a0;
- (void)getCachedQueries:(id *)a0 results:(id *)a1 webSearch:(BOOL)a2;
- (id)getQueryTaskForHandler:(id)a0 scaleFactor:(double)a1 whyQuery:(unsigned long long)a2;
- (id)initWithClient:(id)a0 clientQueue:(id)a1 config:(id)a2 session:(id)a3;
- (id)queryTaskWithEngagedSuggestion:(id)a0 externalId:(unsigned int)a1 handler:(id)a2 queryContext:(id)a3 queryIdent:(unsigned long long)a4;
- (void)setFeedbackStartTime;
- (void)setQueryLanguage:(id)a0;
- (void)shrinkCaches;

@end
