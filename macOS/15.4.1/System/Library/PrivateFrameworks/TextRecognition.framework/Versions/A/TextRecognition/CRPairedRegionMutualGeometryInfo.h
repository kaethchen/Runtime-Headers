@interface CRPairedRegionMutualGeometryInfo : NSObject

@property (readonly) struct CGVector { double dx; double dy; } leftOffsetAlongBaseline;
@property (readonly) struct CGVector { double dx; double dy; } rightOffsetAlongBaseline;
@property (readonly) struct CGVector { double dx; double dy; } leadingOffsetAlongBaseline;
@property (readonly) struct CGVector { double dx; double dy; } trailingOffsetAlongBaseline;
@property (readonly) double inlineSpacingAlongBaseline;
@property (readonly) BOOL isCenterJustified;

- (id)initFromGeometryInfo1:(id)a0 geometryInfo2:(id)a1;

@end
