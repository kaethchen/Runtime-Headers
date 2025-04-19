@interface ConversationKit.TapInteraction : NSObject <NSGestureRecognizerDelegate, NSObject> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

@property (nonatomic) long long numberOfTapsRequired;

- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)handleRecognizer:(id)a0;

@end
