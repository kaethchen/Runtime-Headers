@class NSDictionary;

@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}

- (id)init;
- (void).cxx_destruct;
- (void)_initializeFeedbackListenersDictWith:(id)a0;
- (id)clientModelIdsWithFeedbackListeners;
- (void)handleNewFeedbackResult:(id)a0;
- (id)initWithFeedbackListeners:(id)a0;

@end
