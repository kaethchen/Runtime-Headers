@class NSString;

@interface ATXFallbackActionsFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)clientModelIds;
- (void)receiveUIFeedbackResult:(id)a0;
- (void)receiveUIFeedbackResult:(id)a0 histogramManager:(id)a1;

@end
