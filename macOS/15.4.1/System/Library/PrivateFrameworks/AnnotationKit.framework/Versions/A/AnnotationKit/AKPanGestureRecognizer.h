@class NSString;

@interface AKPanGestureRecognizer : NSPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } locationOfFirstTouch;
@property (nonatomic) BOOL penGestureDetected;
@property (nonatomic) double currentWeight;
@property (nonatomic) double currentMaxWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (struct CGPoint { double x0; double x1; })locationOfFirstTouchInView:(id)a0;

@end
