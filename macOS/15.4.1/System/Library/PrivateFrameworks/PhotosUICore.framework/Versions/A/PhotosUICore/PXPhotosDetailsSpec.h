@class PXWidgetSpec, PXPhotosDetailsBarSpec, PXWidgetCompositionSpec, NSColor;

@interface PXPhotosDetailsSpec : PXFeatureSpec

@property (readonly, nonatomic) unsigned long long detailsOptions;
@property (readonly, nonatomic) PXWidgetCompositionSpec *compositionSpec;
@property (readonly, nonatomic) PXWidgetSpec *widgetSpec;
@property (readonly, nonatomic) PXPhotosDetailsBarSpec *barSpec;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *dimmingColor;
@property (readonly, nonatomic) double dimmingAlpha;
@property (readonly, nonatomic) BOOL shouldInitializeBarsController;
@property (readonly, nonatomic) BOOL enableActionsWidget;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 detailsOptions:(unsigned long long)a2;

@end
