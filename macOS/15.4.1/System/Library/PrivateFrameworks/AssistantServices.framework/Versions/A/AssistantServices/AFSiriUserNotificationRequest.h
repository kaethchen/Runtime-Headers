@class NSString, AFSiriUserNotificationSummary, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {
    UNNotification *_notification;
    NSString *_sourceAppId;
    long long _platform;
    long long _summaryDecision;
    AFSiriUserNotificationSummary *_summary;
}

+ (BOOL)canBeHandled;
+ (BOOL)supportedForApplicationWithBundleId:(id)a0;
+ (BOOL)supportedOnPlatform;

- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void)deactivateRequestForReason:(long long)a0 completion:(id /* block */)a1;
- (void)deliverSummary:(id)a0 completion:(id /* block */)a1;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1 platform:(long long)a2;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1 platform:(long long)a2 summaryDecision:(long long)a3;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1 platform:(long long)a2 summaryDecision:(long long)a3 summary:(id)a4;
- (void)withdrawalRequestWithCompletion:(id /* block */)a0;

@end
