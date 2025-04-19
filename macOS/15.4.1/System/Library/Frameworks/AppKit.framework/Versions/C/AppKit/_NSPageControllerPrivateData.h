@class NSArray, NSString, NSViewController;

@interface _NSPageControllerPrivateData : NSObject {
    NSArray *_imageViews;
    NSViewController *_destinationTransitionViewController;
    NSString *_destinationTransitionIdentifier;
    long long _ignoreCompleteTransitionCount;
    BOOL _expectingCompleteTransition;
}

- (void)dealloc;

@end
