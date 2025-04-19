@class NSString, NSArray;

@interface _PSMessagesZkwFeedback : NSObject

@property (nonatomic) BOOL dryRun;
@property (readonly, copy, nonatomic) NSString *chatGuidEngaged;
@property (readonly, copy, nonatomic) NSArray *suggestions;

- (void).cxx_destruct;
- (id)feedbackPayload;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)a0;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (id)initWithChatGuidEngagaged:(id)a0 suggestions:(id)a1;
- (id)reasonForSuggestionIndex:(unsigned long long)a0;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)a0;

@end
