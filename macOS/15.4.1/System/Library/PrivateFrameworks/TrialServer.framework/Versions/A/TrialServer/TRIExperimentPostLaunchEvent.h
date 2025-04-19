@class NSString, NSArray, TRIExperimentDeploymentTreatment, TRITrialSystemTelemetry;

@interface TRIExperimentPostLaunchEvent : NSObject

@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) NSString *experimentStateName;
@property (readonly, nonatomic) TRIExperimentDeploymentTreatment *treatmentTriple;
@property (readonly, nonatomic) NSString *errorOrDeactivationReason;
@property (readonly, nonatomic) int deploymentEnvironment;
@property (readonly, nonatomic) NSArray *versionedNamespaces;
@property (readonly, nonatomic) TRITrialSystemTelemetry *additionalTelemetry;

+ (BOOL)_isCategoricalLoggingEventType:(unsigned char)a0;
+ (id)_experimentStateNameForType:(unsigned char)a0;
+ (BOOL)_isErrorType:(unsigned char)a0;
+ (id)deactivationEventWithTriggerEvent:(unsigned long long)a0 experimentRecord:(id)a1 additionalTelemetry:(id)a2;
+ (id)eventWithEventType:(unsigned char)a0 experimentRecord:(id)a1;
+ (id)eventWithEventType:(unsigned char)a0 treatmentTriple:(id)a1;
+ (id)failureEventWithEventType:(unsigned char)a0 treatmentTriple:(id)a1 failureReason:(id)a2;
+ (id)obsoletionOrDeactivationEventWithTriggerEvent:(unsigned long long)a0 previousStateProvider:(id)a1 experimentRecord:(id)a2 additionalTelemetry:(id)a3;

- (void).cxx_destruct;
- (id)experimentRecord;
- (id)initWithEventType:(unsigned char)a0 experimentStateName:(id)a1 experimentRecord:(id)a2 errorOrDeactivationReason:(id)a3;
- (id)initWithEventType:(unsigned char)a0 experimentStateName:(id)a1 experimentRecord:(id)a2 errorOrDeactivationReason:(id)a3 telemetry:(id)a4;
- (id)initWithEventType:(unsigned char)a0 experimentStateName:(id)a1 treatmentTriple:(id)a2 errorOrDeactivationReason:(id)a3 deploymentEnvironment:(int)a4 versionedNamespaces:(id)a5 telemetry:(id)a6;

@end
