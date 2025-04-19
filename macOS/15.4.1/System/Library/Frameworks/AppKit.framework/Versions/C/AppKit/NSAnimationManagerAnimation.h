@class NSString, CATransactionCompletionItem;
@protocol NSRunningAnimation;

@interface NSAnimationManagerAnimation : NSObject

@property (retain) id<NSRunningAnimation> runningAnimation;
@property (retain) id targetValue;
@property (retain) id targetObject;
@property (copy) NSString *targetKeyPath;
@property (retain) CATransactionCompletionItem *completionItem;
@property double startTime;
@property long long options;
@property BOOL hasBeenRemoved;

- (void)dealloc;

@end
