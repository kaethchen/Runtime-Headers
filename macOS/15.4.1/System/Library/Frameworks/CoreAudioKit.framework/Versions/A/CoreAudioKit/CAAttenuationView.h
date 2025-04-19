@class NSColor, NSBezierPath;

@interface CAAttenuationView : CAGraphView {
    double pointRadius;
    BOOL pointSelected;
    double gainValue;
    double referenceDistanceValue;
    unsigned int dataSize;
    NSColor *curveColor;
    NSBezierPath *mCurvePath;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setGain:(double)a0;
- (double)gain;
- (unsigned int)dataSize;
- (void)setMaxDistance:(double)a0;
- (double)referenceDistance;
- (void)setReferenceDistance:(double)a0;
- (void)plotAttenuationData:(struct AUDistanceAttenuation_Data { unsigned int x0; struct AUDistanceAttenuationPair { float x0; float x1; } x1[1]; } *)a0;
- (struct AUDistanceAttenuation_Data { unsigned int x0; struct AUDistanceAttenuationPair { float x0; float x1; } x1[1]; } *)prepareAttenuationData:(struct AUDistanceAttenuation_Data { unsigned int x0; struct AUDistanceAttenuationPair { float x0; float x1; } x1[1]; } *)a0;
- (id)stringForHorizontalValue:(double)a0;

@end
