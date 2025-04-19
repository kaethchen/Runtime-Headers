@class NSString, TRIPBUInt32Array;

@interface TRIExperimentRollbackPushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) TRIPBUInt32Array *deploymentIdArray;
@property (readonly, nonatomic) unsigned long long deploymentIdArray_Count;

+ (id)descriptor;

@end
