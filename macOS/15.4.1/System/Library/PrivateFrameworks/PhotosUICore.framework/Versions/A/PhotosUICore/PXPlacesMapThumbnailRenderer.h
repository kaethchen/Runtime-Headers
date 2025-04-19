@class PKExtendedTraitCollection, NSString, PXPlacesMapThumbnailLocationCurator;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate>

@property (retain) id<PXPlacesMapGeotaggableInfoDelegate> informationDelegate;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain) id extendedTraitObserver;
@property (weak, nonatomic) PXPlacesMapThumbnailLocationCurator *thumbnailLocationCurator;
@property (readonly, nonatomic) long long countLabelStyle;
@property (readonly) long long popoverImageType;
@property (readonly) unsigned long long imageOptions;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } minimumEdgeInsets;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)annotationForGeotaggables:(id)a0 initialCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)imageForGeotaggable:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 networkAccessAllowed:(BOOL)a2 andCompletion:(id /* block */)a3;
- (id)initWithTraitCollection:(id)a0 informationDelegate:(id)a1 popoverImageType:(long long)a2 popoverImageOptions:(unsigned long long)a3 countLabelStyle:(long long)a4 thumbnailLocationCurator:(id)a5;
- (BOOL)supportsMoveAnimations;
- (id)viewForAnnotation:(id)a0 andMapView:(id)a1;

@end
