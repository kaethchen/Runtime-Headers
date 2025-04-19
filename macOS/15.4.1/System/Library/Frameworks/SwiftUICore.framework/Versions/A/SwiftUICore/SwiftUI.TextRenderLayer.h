@interface SwiftUI.TextRenderLayer : CALayer <CALayerDelegate> {
    void /* unknown type, empty encoding */ animationController;
    void /* unknown type, empty encoding */ geometryObserver;
    void /* unknown type, empty encoding */ fragment;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ rawLayout;
    void /* unknown type, empty encoding */ markers;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ interactionMetrics;
    void /* unknown type, empty encoding */ segmentLayers;
    void /* unknown type, empty encoding */ effectToSegmentsIndices;
    void /* unknown type, empty encoding */ effectIdentifiers;
    void /* unknown type, empty encoding */ baseFragmentIdentifierMap;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ sharedDrawingSegments;
    void /* unknown type, empty encoding */ sharedDrawingLayer;
    void /* unknown type, empty encoding */ displacements;
    void /* unknown type, empty encoding */ layoutBounds;
    void /* unknown type, empty encoding */ layoutBoundsNaturalOutsets;
    void /* unknown type, empty encoding */ layoutLineFragmentPadding;
    void /* unknown type, empty encoding */ currentDisplacement;
    void /* unknown type, empty encoding */ activeIdentifiers;
    void /* unknown type, empty encoding */ time;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithLayer:(id)a0;

@end
