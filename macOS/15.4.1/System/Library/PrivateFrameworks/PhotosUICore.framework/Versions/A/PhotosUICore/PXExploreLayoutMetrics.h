@class NSString;

@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider>

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutSubtype;
@property (nonatomic) long long reorderingTolerance;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long largeHeroDensity;
@property (copy, nonatomic) id /* block */ acceptableLargeHeroPredicate;
@property (nonatomic) BOOL allowHeaders;
@property (nonatomic) BOOL allowSpecialPanoHeaders;
@property (nonatomic) double buildingBlockAspectRatio;
@property (nonatomic) double preferredFullWidthHeaderAspectRatio;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)initWithSpec:(id)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0 sizeClass:(long long)a1 orientation:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3 safeAreaInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4;

@end
