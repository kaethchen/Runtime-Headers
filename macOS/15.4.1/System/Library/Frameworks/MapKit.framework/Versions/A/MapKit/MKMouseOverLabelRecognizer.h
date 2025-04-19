@class NSTrackingArea, NSView, VKLabelMarker;
@protocol MKMouseOverLabelTarget, MKMouseOverLabelRecognizerDelegate;

@interface MKMouseOverLabelRecognizer : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (weak, nonatomic) NSView *view;
@property (readonly, nonatomic) BOOL recognizesMouseOverSelectablePartsOnly;
@property (retain, nonatomic) VKLabelMarker *labelMarker;
@property (weak, nonatomic) id<MKMouseOverLabelTarget> target;
@property (weak, nonatomic) id<MKMouseOverLabelRecognizerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPointInWindow:(struct CGPoint { double x0; double x1; })a0;
- (void)attachToView:(id)a0;
- (void)detachFromView;
- (id)initWithLabelMarker:(id)a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 target:(id)a2;
- (void)setState:(long long)a0 withEvent:(id)a1;

@end
