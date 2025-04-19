@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {
    MKMapView *_mapView;
    BOOL _pitchAdjustsAltitude;
    BOOL _needsStateUpdate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) double centerCoordinateDistance;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (nonatomic) double altitude;

+ (id)camera;
+ (struct CLLocationCoordinate2D { double x0; double x1; })_adjustCoordinateForPitch:(struct CLLocationCoordinate2D { double x0; double x1; })a0 heading:(double)a1 pitch:(double)a2 minimumPitchRequiredForAdjustment:(double)a3 tolerance:(double)a4;
+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 aspectRatio:(float)a1;
+ (id)_cameraLookingAtMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 forViewSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_cameraLookingAtScene:(id)a0;
+ (unsigned long long)_sizeCategoryForViewSize:(struct CGSize { double x0; double x1; })a0;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 fromDistance:(double)a1 pitch:(double)a2 heading:(double)a3;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 fromEyeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 eyeAltitude:(double)a2;
+ (id)cameraLookingAtMapItem:(id)a0 forViewSize:(struct CGSize { double x0; double x1; })a1 allowPitch:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validate;
- (void)_updateState;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })enclosingMapRectForAspectRatio:(float)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_enclosingGEOMapRectForAspectRatio:(float)a0;
- (id)_mapView;
- (void)_mapViewStateChanged;
- (void)_setMapView:(id)a0;

@end
