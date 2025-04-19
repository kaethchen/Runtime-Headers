@class STMediaStatusDomainPublisher, NSMutableSet, STMediaStatusDomainMicrophoneRecordingAttribution, ASDTCondition;

@interface ASDTSystemStatus : NSObject

@property (retain, nonatomic) ASDTCondition *mutex;
@property (retain, nonatomic) NSMutableSet *deviceUIDs;
@property (retain, nonatomic) STMediaStatusDomainPublisher *publisher;
@property (retain, nonatomic) STMediaStatusDomainMicrophoneRecordingAttribution *attribution;
@property (readonly, nonatomic) BOOL enabled;

+ (id)systemStatus;

- (id)init;
- (void).cxx_destruct;
- (void)publishMicrophoneEnabled:(BOOL)a0;
- (void)recordingIsEnabled:(BOOL)a0 forDeviceUID:(id)a1;

@end
