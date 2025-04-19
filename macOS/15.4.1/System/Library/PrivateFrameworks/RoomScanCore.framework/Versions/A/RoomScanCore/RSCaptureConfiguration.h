@interface RSCaptureConfiguration : NSObject <NSCopying> {
    BOOL _mirrorDetectionEnabled;
    BOOL _curvedWallEnabled;
    BOOL _uniformHeightPolygonEnabled;
    unsigned long long _coachingMaxFrameRate;
}

@property (nonatomic, getter=isWindowDoorDetectionEnabled) BOOL windowDoorDetectionEnabled;
@property (nonatomic, getter=isLiveResultEnabled) BOOL liveResultEnabled;
@property (nonatomic, getter=isTextCoachingEnabled) BOOL textCoachingEnabled;
@property (nonatomic, getter=isOnboardingEnabled) BOOL onboardingEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) BOOL objectBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) BOOL standardizationEnabled;
@property (nonatomic, getter=isMarkerCoachingEnabled) BOOL markerCoachingEnabled;
@property (nonatomic, getter=isDoorWindowBeautificationEnabled) BOOL doorWindowBeautificationEnabled;
@property (nonatomic, getter=isDriftDetectionEnabled) BOOL driftDetectionEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) BOOL nonUniformHeightEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) BOOL openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) BOOL opendoorReplaceOpeningEnabled;
@property (nonatomic, getter=isDoorReplaceOpeningEnabled) BOOL doorReplaceOpeningEnabled;
@property (nonatomic, getter=isBoundaryRefinementEnabled) BOOL boundaryRefinementEnabled;
@property (nonatomic, getter=isBayWindowRecessedAreaEnabled) BOOL bayWindowRecessedAreaEnabled;
@property (nonatomic) unsigned long long maxFramerate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
