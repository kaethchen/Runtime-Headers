@interface CRRegionGeometryInfo : CRImageSpaceQuad

@property unsigned long long layoutDirection;
@property struct CGSize { double width; double height; } cachedSize;
@property double estimatedLineHeight;
@property (readonly) struct CGVector { double dx; double dy; } baselineVector;

- (struct CGSize { double x0; double x1; })size;
- (id)initFromRegion:(id)a0 layoutDirection:(unsigned long long)a1;
- (id)mutualGeometryInfoWith:(id)a0;

@end
