@class NSString, NSData, RTCReporting, NSObject;

@interface PKAnalyticsReporter : NSObject {
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    NSObject *_sessionToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockArchive;
    NSString *_subject;
}

+ (id)_isDTOSupported;
+ (id)pageTagForAppleCashSenderError:(id)a0;
+ (id)archivedSessionTokenForSubject:(id)a0;
+ (void)reportAppleCashSenderErrorPage:(id)a0;
+ (void)_attachFeatureTypeToEvent:(id)a0 forSubject:(id)a1;
+ (id)_authMethodFromResult:(id)a0;
+ (id)_eventTypeFromError:(id)a0;
+ (void)_isDTOPasscodeFallbackAllowed:(id /* block */)a0;
+ (id)_isDTOUserEnabled;
+ (id)_stringFromBool:(BOOL)a0;
+ (id)analyticsErrorTextForError:(long long)a0;
+ (id)archivedSessionTokenForAnalyticsSubject:(id)a0;
+ (void)beginSubjectReporting:(id)a0;
+ (void)beginSubjectReporting:(id)a0 withArchivedParent:(id)a1;
+ (int)clientTypeForSubject:(id)a0;
+ (void)endSubjectReporting:(id)a0;
+ (void)reportAccountRewardsEventIfNecessary:(id)a0;
+ (void)reportAppleCashSenderErrorPage:(id)a0 buttonTag:(id)a1;
+ (void)reportDTOAuthEndedWithResult:(id)a0 error:(id)a1 forSubject:(id)a2;
+ (void)reportDTOAuthEvent:(id)a0 forSubject:(id)a1;
+ (void)reportDashboardEventIfNecessary:(id)a0 forPass:(id)a1;
+ (id)reporterForAnalyticsSubject:(id)a0;
+ (id)reporterForSubject:(id)a0;
+ (void)sendSingularEvent:(id)a0;
+ (void)subject:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)subject:(id)a0 sendEvent:(id)a1;
+ (id)subjectDictionary;
+ (id)subjectSessionStateDateDictionary;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)a0;
+ (id)subjectToReportDashboardAnalyticsForFeature:(unsigned long long)a0;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)a0;
+ (void)subjects:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)subjects:(id)a0 sendEvent:(id)a1;
+ (void)updateIdentityEventToReportDashboardAnalytics:(id)a0 forPass:(id)a1;
+ (id)virtualCardReferralSource:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithSubject:(id)a0;
- (id)initWithArchivedParent:(id)a0 subject:(id)a1;
- (id)_reportingSessionID;
- (id)archivedSessionToken;
- (long long)bucketedSessionDurationFromDuration:(long long)a0;
- (id)initWithParent:(id)a0 subject:(id)a1;
- (id)initWithParentToken:(id)a0 subject:(id)a1;
- (void)sendEvent:(id)a0 withCategory:(long long)a1;

@end
