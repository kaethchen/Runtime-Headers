@class NSColor;

@interface __NSLMMarkedTextUnderlineRenderer : NSObject {
    struct CGContext { } *_cgContextRef;
    NSColor *_underlineColor;
    BOOL _hasUnderlineSegment;
    double _yPosition;
    double _selectedStartX;
    double _selectedEndX;
    double _startX;
    double _endX;
}

- (void)dealloc;
- (void)_renderUnderlineStartX:(double)a0 endX:(double)a1 yPosition:(double)a2 alphaValue:(double)a3;

@end
