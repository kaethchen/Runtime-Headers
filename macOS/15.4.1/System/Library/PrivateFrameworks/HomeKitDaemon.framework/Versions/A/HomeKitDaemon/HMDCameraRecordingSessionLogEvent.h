@class NSString, NSDictionary, NSUUID;

@interface HMDCameraRecordingSessionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL didReadFirstFragment;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRecordingSessionAlreadyInProgressError:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccessoryIdentifier:(id)a0;

@end
