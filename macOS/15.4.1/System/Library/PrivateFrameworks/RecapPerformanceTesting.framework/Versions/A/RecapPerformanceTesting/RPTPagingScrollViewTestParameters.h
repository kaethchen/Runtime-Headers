@class NSString, RPTCoordinateSpaceConverter, CAMediaTimingFunction;

@interface RPTPagingScrollViewTestParameters : NSObject <RPTTestParameters>

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double scrollingContentLength;
@property (nonatomic) long long direction;
@property (nonatomic) double iterationDurationFactor;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (retain, nonatomic) CAMediaTimingFunction *curveFunction;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareWithComposer:(id)a0;
- (id)initWithTestName:(id)a0 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollContentLength:(double)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
- (void)positionsForDirection:(long long)a0 startOut:(struct CGPoint { double x0; double x1; } *)a1 endOut:(struct CGPoint { double x0; double x1; } *)a2;
- (void)swipeWithComposer:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;

@end
