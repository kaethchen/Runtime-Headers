@interface PPSocialHighlightMetrics : NSObject

+ (id)SMSBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (unsigned long long)countAllLinksReceivedInMessages;
+ (id)_countSentMessagesInLastWeekMatchingChatType:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)_loggableToggleStatus:(unsigned char)a0;
+ (BOOL)_queryLinksWithFetchAttributes:(id)a0 interval:(double)a1 handler:(id /* block */)a2;
+ (void)_recordTipsContentEvent:(id)a0;
+ (id)allHighlightIdentifiersReceivedWithShouldContinueBlock:(id /* block */)a0;
+ (id)countIMessagesSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;
+ (id)countSMSSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;
+ (id)feedbackTypeCountsByHighlightIdentifierInInterval:(double)a0 forTVOS:(BOOL)a1;
+ (id)hasSentIMessageWithShouldContinueBlock:(id /* block */)a0;
+ (id)hasSentSMSWithShouldContinueBlock:(id /* block */)a0;
+ (id)highlightsReceivedInInterval:(double)a0 shouldContinueBlock:(id /* block */)a1;
+ (double)hoursFromSeconds:(double)a0;
+ (id)iMessageBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (void)logConsumptionByClientWithShouldContinueBlock:(id /* block */)a0;
+ (id)logExpiredLinkStatsWithHighlights:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (void)logFeedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2;
+ (void)logFeedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2;
+ (void)logLinkExpiredMetricsForHighlight:(id)a0 feedbackCountsByClient:(id)a1 forTVOS:(BOOL)a2;
+ (void)logMatchedFeedbackForHighlightMatches:(id)a0 batchSize:(unsigned long long)a1 type:(int)a2 client:(id)a3;
+ (void)logMetricsForExpiringFeedback:(id)a0;
+ (void)registerCTSDataCollection;
+ (void)registerClientLinkStatus;
+ (void)registerCountLinks;
+ (void)registerDeviceSettingsCollection;
+ (void)registerExpiredLinkReview;
+ (void)registerLogConsumedByClient;
+ (void)registerSampledUnsupportedClientLogging;
+ (id)sendLinkExpiredMessagesForFeedbackCountsByHighlightId:(id)a0 tvFeedbackCountsByHighlightId:(id)a1 highlights:(id)a2;
+ (id)unsupportedClientsFromPastDayWithShouldContinueBlock:(id /* block */)a0;

@end
