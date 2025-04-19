@class CLPLOGENTRYVISIONVIOEstimation, CLPBundleId, CLPLOGENTRYVISIONVLLocalizationResult, CLPWorkoutUpdateMotionActivity, CLPInertialOdometry, CLPIndoorCMPedometer, CLPIndoorCMAttitude, CLPOutdoorUpdate, CLPLocation, CLPIndoorMotionActivity, CLPIndoorWifiScan, CLPIndoorPressure;

@interface CLPIndoorEvent : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCmAttitude;
@property (retain, nonatomic) CLPIndoorCMAttitude *cmAttitude;
@property (readonly, nonatomic) BOOL hasCmPedometer;
@property (retain, nonatomic) CLPIndoorCMPedometer *cmPedometer;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (retain, nonatomic) CLPIndoorMotionActivity *motionActivity;
@property (readonly, nonatomic) BOOL hasPressure;
@property (retain, nonatomic) CLPIndoorPressure *pressure;
@property (readonly, nonatomic) BOOL hasWifiScan;
@property (retain, nonatomic) CLPIndoorWifiScan *wifiScan;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) CLPBundleId *bundleId;
@property (readonly, nonatomic) BOOL hasVioEstimation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOEstimation *vioEstimation;
@property (readonly, nonatomic) BOOL hasVlLocalizationResult;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationResult *vlLocalizationResult;
@property (readonly, nonatomic) BOOL hasWorkoutUpdateMotionActivity;
@property (retain, nonatomic) CLPWorkoutUpdateMotionActivity *workoutUpdateMotionActivity;
@property (readonly, nonatomic) BOOL hasInertialOdometry;
@property (retain, nonatomic) CLPInertialOdometry *inertialOdometry;
@property (readonly, nonatomic) BOOL hasOutdoorUpdate;
@property (retain, nonatomic) CLPOutdoorUpdate *outdoorUpdate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
