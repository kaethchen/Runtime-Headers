@protocol NSHapticFeedbackPerformer;

@interface NSHapticFeedbackManager : NSObject

@property (class, readonly) id<NSHapticFeedbackPerformer> defaultPerformer;

+ (void)_requestVisuallySynchronizedPerformance:(id)a0 feedbackPattern:(long long)a1;

@end
