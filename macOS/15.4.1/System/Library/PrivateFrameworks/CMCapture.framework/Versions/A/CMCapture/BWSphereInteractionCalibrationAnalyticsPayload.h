@class NSString;

@interface BWSphereInteractionCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) long long magneticFieldMagnitude;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) unsigned int calibrationStatus;
@property (nonatomic) int sphereNeutralPositionError;
@property (nonatomic) int sphereNeutralPosition;
@property (nonatomic) int sphereMacroPositionError;
@property (nonatomic) int sphereMacroPosition;
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
