@class TRIRolloutDeploymentPushNotification, TRIExperimentRollbackPushNotification, TRIExperimentUpdatePushNotification;

@interface TRIPushNotification : TRIPBMessage

@property (readonly, nonatomic) int notificationOneOfCase;
@property (retain, nonatomic) TRIRolloutDeploymentPushNotification *rolloutNotification;
@property (retain, nonatomic) TRIExperimentRollbackPushNotification *experimentNotification;
@property (retain, nonatomic) TRIExperimentUpdatePushNotification *experimentUpdateNotification;

+ (id)descriptor;

@end
