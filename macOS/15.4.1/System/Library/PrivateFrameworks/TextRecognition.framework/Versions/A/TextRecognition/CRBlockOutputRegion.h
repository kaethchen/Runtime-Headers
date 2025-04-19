@class NSArray, NSUUID, NSString, CRNormalizedQuad;

@interface CRBlockOutputRegion : CRCompositeOutputRegion <CRLineWrappableGrouping>

@property BOOL canWrapToNextGroup;
@property (readonly) NSArray *subregions;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;

+ (id)blockWithBlock:(id)a0 children:(id)a1;
+ (id)blockWithLines:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;

- (unsigned long long)type;
- (void)removeSubregion:(id)a0;
- (BOOL)computesNumberOfLinesFromChildren;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;

@end
