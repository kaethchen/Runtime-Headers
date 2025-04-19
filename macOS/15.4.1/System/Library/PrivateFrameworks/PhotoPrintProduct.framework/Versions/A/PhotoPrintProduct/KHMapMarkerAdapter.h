@class KHMapMarker;

@interface KHMapMarkerAdapter : NSObject <KHMapVariableLayoutElement> {
    double _mapMarkerPointScale;
}

@property struct CGPoint { double x; double y; } markerPoint;
@property (readonly, retain) KHMapMarker *mapMarker;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)layoutChoiceIdx;
- (id)initWithMapMarker:(id)a0;
- (unsigned long long)numberOfAvailableLayoutChoices;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })rectForLayoutChoiceIdx:(unsigned long long)a0;
- (void)setLayoutChoiceIdx:(unsigned long long)a0;
- (void)updateMarkerPosition:(id)a0 scale:(double)a1;

@end
