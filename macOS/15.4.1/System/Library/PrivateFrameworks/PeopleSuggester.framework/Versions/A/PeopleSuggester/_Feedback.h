@class NSString;

@interface _Feedback : NSObject

@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) long long feedbackActionType;
@property (nonatomic) BOOL isFallbackFetch;

- (void).cxx_destruct;

@end
