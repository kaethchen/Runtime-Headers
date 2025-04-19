@class PKPassViewController;

@interface PKPassDocumentView : NSView

@property BOOL gestureInProgress;
@property (retain) PKPassViewController *accessibilityPass;

- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)a0;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;

@end
