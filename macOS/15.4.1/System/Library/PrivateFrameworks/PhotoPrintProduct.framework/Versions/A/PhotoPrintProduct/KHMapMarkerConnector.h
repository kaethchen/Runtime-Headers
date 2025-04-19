@class KHMapFrameRenderer, KHMapMarkerAdapter;

@interface KHMapMarkerConnector : NSObject <KHMapVariableLayoutElement> {
    struct CGPoint { double x; double y; } _startMarkerPoint;
    struct CGPoint { double x; double y; } _endMarkerPoint;
    BOOL _currentOrientation;
    unsigned long long _layoutChoiceIdx;
    KHMapFrameRenderer *_mapFrameRenderer;
}

@property (readonly, retain) KHMapMarkerAdapter *startMarkerAdapter;
@property (readonly, retain) KHMapMarkerAdapter *endMarkerAdapter;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)layoutChoiceIdx;
- (id)_renderTreatment;
- (id)initWithStartingMarker:(id)a0 endingMarker:(id)a1 mapFrameRenderer:(id)a2;
- (unsigned long long)numberOfAvailableLayoutChoices;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })rectForLayoutChoiceIdx:(unsigned long long)a0;
- (void)renderConnectorIntoContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)setLayoutChoiceIdx:(unsigned long long)a0;
- (BOOL)updateMarkerPointsFromMapRenderer:(id)a0 scale:(double)a1;

@end
