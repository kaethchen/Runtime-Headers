@class CAMediaTimingFunction, NSString, NSScrollView, RPTCoordinateSpaceConverter;

@interface RPTScrollViewTestParameters : NSObject <RPTTestParameters> {
    NSScrollView *_scrollView;
    NSString *_scrollViewIdentifier;
    BOOL _liveScrolling;
}

@property (readonly, nonatomic) unsigned long long effectiveVersion;
@property (nonatomic) unsigned long long forceMinVersion;
@property (nonatomic) unsigned long long forceMaxVersion;
@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double amplitude;
@property (nonatomic) double scrollingContentLength;
@property (nonatomic) double amplitudeFactor;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL preventSheetDismissal;
@property (nonatomic) double iterationDurationFactor;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic) BOOL shouldFlick;
@property (retain, nonatomic) CAMediaTimingFunction *curveFunction;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTestName:(id)a0 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 amplitude:(double)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
- (void)prepareWithComposer:(id)a0;
- (void)waitForPostEventStreamDelayWithHandler:(id /* block */)a0;
- (id)initWithTestName:(id)a0 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollContentLength:(double)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
- (void)completeAfterScrollEndSignpost:(id /* block */)a0;
- (double)_effectiveAmplitudeFactor;
- (id /* block */)_v1_composerBlock;
- (id /* block */)_v2_composerBlock;
- (id /* block */)_v3_4_composerBlock;
- (void)completeAfterScrollEndNotification:(id /* block */)a0;
- (id)initWithTestName:(id)a0 scrollViewIdentifier:(id)a1 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scrollContentLength:(double)a3 direction:(long long)a4 completionHandler:(id /* block */)a5;
- (void)liveScrollNotification:(id)a0;

@end
