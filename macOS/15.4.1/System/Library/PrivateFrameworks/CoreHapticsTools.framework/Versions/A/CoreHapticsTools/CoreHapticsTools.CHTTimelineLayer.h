@interface CoreHapticsTools.CHTTimelineLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timelineLayer;
    void /* unknown type, empty encoding */ leadingLabel;
    void /* unknown type, empty encoding */ trailingLabel;
    void /* unknown type, empty encoding */ markedDurationTriangle;
    void /* unknown type, empty encoding */ markedDurationLabel;
    void /* unknown type, empty encoding */ timelineIsInteractive;
    void /* unknown type, empty encoding */ automaticSubdivisions;
    void /* unknown type, empty encoding */ majorSubdivisionMaximumSpacing;
    void /* unknown type, empty encoding */ majorSubdivisionMinimumSpacing;
    void /* unknown type, empty encoding */ timelineDivisionLabels;
    void /* unknown type, empty encoding */ timelineTextAlignment;
    void /* unknown type, empty encoding */ rightLabelCushion;
    void /* unknown type, empty encoding */ labelFont;
    void /* unknown type, empty encoding */ _maxMillisecondPrecision;
    void /* unknown type, empty encoding */ _minMillisecondPrecision;
    void /* unknown type, empty encoding */ _markedDuration;
    void /* unknown type, empty encoding */ _markedDurationTriangleSize;
    void /* unknown type, empty encoding */ _divisions;
    void /* unknown type, empty encoding */ _requestedDivisions;
    void /* unknown type, empty encoding */ defaultSubdivisions;
    void /* unknown type, empty encoding */ _subdivisions;
    void /* unknown type, empty encoding */ _divisionLength;
    void /* unknown type, empty encoding */ _subdivisionLength;
    void /* unknown type, empty encoding */ _shouldDrawBaseline;
    void /* unknown type, empty encoding */ timelineLabelSpacing;
    void /* unknown type, empty encoding */ _lineThickness;
    void /* unknown type, empty encoding */ prevFrame;
    void /* unknown type, empty encoding */ timeLabelsNeedLayout;
}

@property (nonatomic) BOOL masksToBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;

@end
