@class NSDictionary, NSAnimation;
@protocol NSAnimationContextCompletionHandlerSuspension;

@interface _NSAccessoryAnimationData : NSObject

@property (retain) id<NSAnimationContextCompletionHandlerSuspension> animationContextResumeKey;
@property (retain) NSAnimation *visibilityAnimation;
@property (weak) id animator;
@property (copy) NSDictionary *animationsDictionary;

- (void)dealloc;
- (void).cxx_destruct;

@end
