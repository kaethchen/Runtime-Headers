@class NSString, NSSet, NSDictionary;

@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int _clientIDType;
    unsigned int _reactionsCount;
    unsigned int _reactionsEffectsEnabledTime;
}

@property (nonatomic) unsigned int activeDeviceMask;
@property (nonatomic) int deviceType;
@property (nonatomic) int devicePosition;
@property (nonatomic) int startingCameraPosture;
@property (nonatomic) int streamingStartExifOrientation;
@property (nonatomic) unsigned int streamingTime;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (retain, nonatomic) NSSet *sunburnDetectOccurred;
@property (retain, nonatomic) NSDictionary *degradedAutoFocusStatus;
@property (retain, nonatomic) NSDictionary *apsMaxDynamicGainDerate;
@property (retain, nonatomic) NSDictionary *apsMaxTopEndDynamicBuffer;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetectAttempts;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetects;
@property (retain, nonatomic) NSDictionary *actuatorVendor;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int numberOfPhotoCaptures;
@property (nonatomic) unsigned int numberOfBurstPhotoCaptures;
@property (nonatomic) unsigned int numberOfBalancedPhotoCaptures;
@property (nonatomic) unsigned int timeToFirstPhotoCapture;
@property (nonatomic) unsigned int maxTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int minTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate1;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate1;
@property (nonatomic) unsigned int longestButtonMashingEventAtRate0;
@property (nonatomic) unsigned int longestButtonMashingEventAtRate1;
@property (nonatomic) unsigned int timeOfFlightCameraProjectorModeMask;
@property (nonatomic) unsigned int timeOfFlightCameraUsageTypeMask;
@property (nonatomic) float structuredLightIdleTemperatureFirstReading;
@property (nonatomic) float structuredLightActiveTemperatureFirstReading;
@property (nonatomic) float structuredLightActiveTemperatureLastReading;
@property (nonatomic) float structuredLightActiveTemperatureRange;
@property (nonatomic) float structuredLightActiveTemperatureAverage;
@property (nonatomic) float infaredSensorTemperatureRange;
@property (nonatomic) float infaredSensorTemperatureAverage;
@property (retain, nonatomic) NSDictionary *sensorTemperatureStats;
@property (nonatomic) long long infraredProjectorUptimeInMsForLowPowerSparse;
@property (nonatomic) long long infraredProjectorUptimeInMsForHighPowerSparse;
@property (nonatomic) float averageSystemPressureLevel;
@property (nonatomic) int maxSystemPressureLevel;
@property (nonatomic) long long timeToCriticalSystemPressureInMS;
@property (nonatomic) unsigned int systemPressureFactors;
@property (nonatomic) BOOL cinematicFramingSupported;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) unsigned int cinematicFramingTime;
@property (nonatomic) BOOL backgroundBlurSupported;
@property (nonatomic) BOOL backgroundBlurEnabled;
@property (nonatomic) unsigned int backgroundBlurTime;
@property (nonatomic) BOOL backgroundBlurApertureChanged;
@property (nonatomic) float backgroundBlurAperture;
@property (nonatomic) BOOL studioLightingSupported;
@property (nonatomic) BOOL studioLightingEnabled;
@property (nonatomic) unsigned int studioLightingTime;
@property (nonatomic) BOOL studioLightingIntensityChanged;
@property (nonatomic) float studioLightingIntensity;
@property (nonatomic) unsigned int orientationPortraitTime;
@property (nonatomic) unsigned int orientationLandscapeTime;
@property (nonatomic) unsigned int orientationFaceUpTime;
@property (nonatomic) unsigned int orientationFaceDownTime;
@property (nonatomic) BOOL reactionEffectsSupported;
@property (nonatomic) BOOL reactionEffectsEnabled;
@property (nonatomic) BOOL gesturesEnabled;
@property (nonatomic) unsigned int reactionCount;
@property (nonatomic) unsigned int reactionEffectsEnabledTime;
@property (nonatomic) unsigned int gesturesEnabledTime;
@property (nonatomic) BOOL backgroundReplacementSupported;
@property (nonatomic) BOOL backgroundReplacementEnabled;
@property (nonatomic) unsigned int backgroundReplacementTime;
@property (nonatomic) BOOL backgroundReplacementPixelBufferChanged;
@property (nonatomic) BOOL cinematicVideoEnabled;
@property (nonatomic) float cinematicVideoAverageRenderingTime;
@property (nonatomic) float cinematicVideoWorstCaseRenderingTime;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt0FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt1FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt8FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAtOtherFPS;
@property (nonatomic) unsigned int captureDeviceType;
@property (nonatomic) float depthMaxFrameRate;
@property (nonatomic) unsigned int depthFormatDimensionWidth;
@property (nonatomic) unsigned int depthFormatDimensionHeight;
@property (nonatomic) unsigned int depthPixelFormat;
@property (nonatomic) BOOL depthDataFiltered;
@property (nonatomic) BOOL faceDrivenAEAFEnabledByDefault;
@property (nonatomic) unsigned int faceDrivenAFDisabledCount;
@property (nonatomic) unsigned int faceDrivenAEDisabledCount;
@property (nonatomic) unsigned int maxFacesDetected;
@property (nonatomic) float minLuxValue;
@property (nonatomic) float maxLuxValue;
@property (nonatomic) float averageLuxValue;
@property (nonatomic) float medianLuxValue;
@property (retain, nonatomic) NSDictionary *luxHistogram;
@property (nonatomic, getter=isPhotoFormat) BOOL photoFormat;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (nonatomic) unsigned int thermalThrottledTime;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) struct { int width; int height; } videoDimensions;
@property (nonatomic) BOOL highlightRecoveryEnabled;
@property (nonatomic) float minimumSupportedFrameRate;
@property (nonatomic) float maximumSupportedFrameRate;
@property (nonatomic) float minimumFrameRate;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float fieldOfView;
@property (nonatomic) BOOL binned;
@property (nonatomic) int colorSpace;
@property (nonatomic) BOOL clientIsVOIP;
@property (nonatomic) BOOL audioMixWithOthersEnabled;
@property (nonatomic) float invalidFrameDurationBeforeFirstValidFrame;
@property (nonatomic) unsigned int invalidFrameCountAfterFirstValidFrame;
@property (nonatomic) BOOL secureMetadataEnabled;
@property (nonatomic) BOOL hitPortraitInPhotoPreviewThermalPressure;
@property (nonatomic) unsigned int longestContinuousPortraitInPhotoPreviewInMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
