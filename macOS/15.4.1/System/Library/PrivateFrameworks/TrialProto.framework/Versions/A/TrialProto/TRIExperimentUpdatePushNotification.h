@class NSString, TRIPBUInt32Array, TRIPBTimestamp;

@interface TRIExperimentUpdatePushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) TRIPBUInt32Array *deploymentIdArray;
@property (readonly, nonatomic) unsigned long long deploymentIdArray_Count;
@property (retain, nonatomic) TRIPBTimestamp *newEndDate;
@property (nonatomic) BOOL hasNewEndDate;

+ (id)descriptor;

@end
