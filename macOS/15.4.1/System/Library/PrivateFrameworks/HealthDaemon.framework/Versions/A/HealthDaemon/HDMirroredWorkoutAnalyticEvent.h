@interface HDMirroredWorkoutAnalyticEvent : NSObject

@property (nonatomic) long long timeTakenToStartMirroring;
@property (nonatomic) long long timeTakenToStopMirroring;
@property (nonatomic) long long mirroringDuration;
@property (nonatomic) long long timeTakenToSendData;
@property (nonatomic) long long numberOfSendRequests;
@property (nonatomic) long long maxTimeTakenToSendData;
@property (nonatomic) long long minTimeTakenToSendData;

@end
