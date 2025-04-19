@class NSString, NSClickGestureRecognizer;
@protocol PXNSSubjectTrackingViewActionDelegate;

@interface PXNSSubjectTrackingView : PXSubjectTrackingView <NSGestureRecognizerDelegate>

@property (retain, nonatomic) NSClickGestureRecognizer *clickRecognizer;
@property (weak, nonatomic) id<PXNSSubjectTrackingViewActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)viewPressed:(id)a0;
- (BOOL)focusOnDetection:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 strong:(BOOL)a2;
- (long long)addFocusTrack:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 strong:(BOOL)a2;
- (id)initWithMediaView:(id)a0 cineController:(id)a1;
- (void)viewClicked:(id)a0;

@end
