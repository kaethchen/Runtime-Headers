@class CRCodeRedeemerLayer, NSString;
@protocol CRCodeRedeemerViewDebuggingDelegate, CRCodeRedeemerViewDelegate;

@interface _CRCodeRedeemerView : CRCodeRedeemerView <CRCodeRedeemerLayerDelegate, CRCodeRedeemerLayerDebuggingDelegate, CALayerDelegate>

@property (retain, nonatomic) CRCodeRedeemerLayer *rLayer;
@property (nonatomic) id<CRCodeRedeemerViewDebuggingDelegate> debuggingDelegate;
@property id<CRCodeRedeemerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCRCodeRedeemerAvailable;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)session;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopSession;
- (void)startSession;
- (void)codeRedeemerLayerDidFadeStatus:(id)a0;
- (void)codeRedeemerLayer:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemerLayer:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemerLayer:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemerLayerCameraDidStart:(id)a0;
- (void)codeRedeemerLayerDidFindBox:(id)a0;
- (void)codeRedeemerLayerWillFadeStatus:(id)a0;
- (void)didRunStage1:(id)a0 time:(double)a1;
- (void)didRunStage2:(id)a0 time:(double)a1;
- (void)didRunStage3:(id)a0 time:(double)a1 confidence:(float)a2 accepted:(BOOL)a3;
- (void)showCodeRedeemStatus:(id)a0 withColor:(struct CGColor { } *)a1 forDuration:(double)a2 style:(int)a3;

@end
