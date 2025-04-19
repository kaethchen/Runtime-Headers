@class NSString, NSArray, MKMapConfiguration, GEOComposedRoute, NSAppearance, GEOApplicationAuditToken, MKMapCamera, NSMutableDictionary, _MKKVOProxy, MKPointOfInterestFilter, VKRouteContext, NSNumber;
@protocol VKRouteOverlay;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, _MKKVOProxyDelegate, NSCopying> {
    NSMutableDictionary *_overlayRenderers;
    _MKKVOProxy *_kvoProxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usingRect;
@property (readonly, nonatomic, getter=_viewportMode) long long viewportMode;
@property (readonly, nonatomic, getter=_appearanceToRender) NSAppearance *appearanceToRender;
@property (readonly, nonatomic, getter=_resolvedAppearance) NSAppearance *resolvedAppearance;
@property (nonatomic, getter=_showsNightMode, setter=_setShowsNightMode:) BOOL showsNightMode;
@property (nonatomic, getter=_showsVenues, setter=_setShowsVenues:) BOOL showsVenues;
@property (nonatomic, getter=_showsRoadLabels, setter=_setShowsRoadLabels:) BOOL showsRoadLabels;
@property (nonatomic, getter=_showsRoadShields, setter=_setShowsRoadShields:) BOOL showsRoadShields;
@property (nonatomic, getter=_showsPointLabels, setter=_setShowsPointLabels:) BOOL showsPointLabels;
@property (nonatomic, getter=_allowsSimultaneousLightDarkSnapshots, setter=_setAllowsSimultaneousLightDarkSnapshots:) BOOL allowsSimultaneousLightDarkSnapshots;
@property (nonatomic, getter=_cartographicConfiguration, setter=_setCartographicConfiguration:) struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; BOOL x6; } cartographicConfiguration;
@property (nonatomic, getter=_showsAppleLogo, setter=_setShowsAppleLogo:) BOOL showsAppleLogo;
@property (nonatomic, getter=_edgeInsets, setter=_setEdgeInsets:) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long signpostId;
@property (retain, nonatomic, getter=_composedRouteForRouteLine, setter=_setComposedRouteForRouteLine:) GEOComposedRoute *composedRouteForRouteLine;
@property (retain, nonatomic, getter=_routeContext, setter=_setRouteContext:) VKRouteContext *routeContext;
@property (retain, nonatomic, getter=_routeOverlay, setter=_setRouteOverlay:) id<VKRouteOverlay> routeOverlay;
@property (copy, nonatomic) NSArray *annotationViews;
@property (nonatomic, getter=_searchResultsType, setter=_setSearchResultsType:) unsigned char searchResultsType;
@property (copy, nonatomic, getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:) NSArray *customFeatureAnnotations;
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic, getter=_selectedTrailID) NSNumber *selectedTrailID;
@property (readonly, copy, nonatomic, getter=_selectedTrailName) NSString *selectedTrailName;
@property (readonly, copy, nonatomic, getter=_selectedTrailLocale) NSString *selectedTrailLocale;
@property (copy, nonatomic) MKMapConfiguration *preferredConfiguration;
@property (copy, nonatomic) MKMapCamera *camera;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;
@property (nonatomic) unsigned long long mapType;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSAppearance *appearance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addCameraKVO;
- (id)_allOverlayRenderers;
- (id)_allOverlays;
- (id)_encodableOverlayRenderers;
- (void)_mkObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_overlayRenderersForOverlayLevel:(long long)a0;
- (BOOL)_overlaysRequireModernMap;
- (BOOL)_overlaysSupportElevation;
- (void)_prepareToSubmit;
- (void)_removeCameraKVO;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; BOOL x6; })_resolvedCartographicConfigurationWithAuditToken:(id)a0;
- (void)_setCamera:(id)a0;
- (void)_setOverlayRenderers:(id)a0 forOverlayLevel:(long long)a1;
- (void)_setSelectedTrailWithId:(id)a0 name:(id)a1 locale:(id)a2;
- (BOOL)_showsPointsOfInterest;
- (void)setShowsPointsOfInterest:(BOOL)a0;
- (BOOL)showsPointsOfInterest;

@end
