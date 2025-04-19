@class NSString, NSNumber, RPTCoordinateSpaceConverter;

@interface RPTDirectionalSwipeTestParameters : NSObject <RPTTestParameters>

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) long long direction;
@property (nonatomic) long long swipeCount;
@property (nonatomic) BOOL reverse;
@property (retain, nonatomic) NSNumber *swipeSpeedFactor;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic) BOOL shouldFlick;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTestName:(id)a0 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 swipeCount:(long long)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
- (id)initWithTestName:(id)a0 testType:(unsigned long long)a1 scrollView:(id)a2 completionHandler:(id /* block */)a3;
- (void)prepareWithComposer:(id)a0;
- (id)initWithTestName:(id)a0 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 swipeCount:(long long)a2 reverse:(BOOL)a3 direction:(long long)a4 completionHandler:(id /* block */)a5;
- (void)scrollWithComposer:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 swipeDuration:(double)a3;

@end
