@class NSString, NSArray;

@interface VIRegionOfInterestResult : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (readonly, nonatomic) NSString *regionID;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSArray *searchSections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 glyphName:(id)a1 resultItems:(id)a2 searchSections:(id)a3;
- (id)initWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultItems:(id)a1 searchSections:(id)a2;

@end
