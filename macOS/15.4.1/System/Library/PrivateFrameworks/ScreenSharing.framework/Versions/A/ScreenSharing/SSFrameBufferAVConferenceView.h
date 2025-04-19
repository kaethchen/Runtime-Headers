@interface SSFrameBufferAVConferenceView : SSFrameBufferView

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } conferenceDimensions;
@property unsigned int layerRotation;
@property struct CGPoint { double x; double y; } scrollPoint;
@property (readonly, getter=isUsingAVCMediaStream) BOOL usingAVCMediaStream;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })conferenceFrame;
- (struct SSPoint { long long x0; long long x1; })frameBufferCoordinatesFromNSEvent:(id)a0;
- (struct SSPoint { long long x0; long long x1; })frameBufferCoordinatesFromWindowCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (double)scrollViewMagnification;
- (void)sendMouseButtonEvent:(id)a0 withButton:(unsigned long long)a1 withState:(int)a2;
- (void)sendMouseButtonEventWithWindowCoordinates:(struct CGPoint { double x0; double x1; })a0 withButton:(unsigned long long)a1 withState:(int)a2 withClickCount:(long long)a3 withEvent:(id)a4;
- (void)setAVConferenceLayerRotation:(unsigned int)a0 forScreen:(long long)a1;
- (void)setUseCachedImage:(BOOL)a0;
- (BOOL)useCachedImage;

@end
