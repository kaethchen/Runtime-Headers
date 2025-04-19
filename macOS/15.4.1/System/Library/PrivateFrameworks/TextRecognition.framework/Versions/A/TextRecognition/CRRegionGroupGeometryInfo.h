@class CRRegionGeometryInfo;

@interface CRRegionGroupGeometryInfo : CRRegionGeometryInfo

@property (readonly) CRRegionGeometryInfo *firstSubregion;
@property (readonly) CRRegionGeometryInfo *lastSubregion;
@property (readonly) BOOL isCenterJustified;
@property (readonly) BOOL isLeftJustified;
@property (readonly) BOOL isRightJustified;

- (void).cxx_destruct;
- (id)initFromRegionGroup:(id)a0;

@end
