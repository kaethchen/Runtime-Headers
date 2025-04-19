@class NSColor, NSImage;

@interface _MKMarkerStyle : NSObject

@property (readonly, nonatomic) NSColor *markerColor;
@property (readonly, nonatomic) double shadowAlpha;
@property (readonly, nonatomic) NSColor *strokeColor;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) NSColor *glyphColor;
@property (readonly, nonatomic) NSImage *glyphImage;

+ (id)markerStyleForEffectiveAppearance:(id)a0 scale:(double)a1 state:(long long)a2 styleAttributes:(id)a3 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a4;

- (void).cxx_destruct;

@end
