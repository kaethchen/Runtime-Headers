@class NSString, NSUUID, NSSet, SVXRadarDraftFactory, SVXRadarRateLimiter, NSUserDefaults;
@protocol SVXPerforming, SVXRadarFiling;

@interface SVXTapToRadarManager : NSObject {
    id<SVXPerforming> _performer;
    NSUserDefaults *_ttrHistory;
    NSUUID *_requestID;
    NSSet *_errorsToSkipFirstTime;
    id<SVXRadarFiling> _radarFiler;
    SVXRadarDraftFactory *_radarDraftFactory;
    SVXRadarRateLimiter *_radarRateLimiter;
}

@property (copy, nonatomic, getter=getRecognitionText) NSString *recognitionText;

+ (id)sharedInstance;
+ (id)sharedInstanceWithRadarFiler:(id)a0;

- (void).cxx_destruct;
- (BOOL)_hasFileTTRWithIssue:(id)a0;
- (BOOL)_hasFileTTRWithRequestID:(id)a0;
- (id)_initWithRadarFiler:(id)a0;
- (BOOL)_skipFirstTimeTTR:(id)a0;
- (void)_updateRequestID:(id)a0;
- (void)_updateTTRHistory:(id)a0;
- (void)createProblem:(id)a0 extraContent:(id)a1 completionHandler:(id /* block */)a2;
- (id)getDomainFatalIssueDialogIdentifiers;
- (id)getEarlyCutoffUtterances;
- (id)getRMVIssueDialogIdentifiers;
- (id)getWebSearchIssueDialogIdentifiers;

@end
