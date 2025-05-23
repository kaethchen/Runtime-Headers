@class NSCountedSet, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate;

@interface WBSTranslationErrorController : NSObject {
    NSCountedSet *_errorCounter;
    NSMutableSet *_errorKeysReachingThreshold;
}

@property (weak, nonatomic) id<WBSTranslationErrorControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)addError:(id)a0;
- (id)_overriddenThresholdForError:(id)a0;

@end
