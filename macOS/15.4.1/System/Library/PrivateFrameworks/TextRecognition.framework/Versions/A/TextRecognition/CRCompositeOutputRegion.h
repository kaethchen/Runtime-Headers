@class NSArray, NSString, CRNormalizedQuad;

@interface CRCompositeOutputRegion : CROutputRegion <CRTextGrouping>

@property (readonly) NSArray *subregions;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;

- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)outputRegionWithContentsOfQuad:(id)a0;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setShouldComputeBoundsFromChildren:(BOOL)a0;

@end
