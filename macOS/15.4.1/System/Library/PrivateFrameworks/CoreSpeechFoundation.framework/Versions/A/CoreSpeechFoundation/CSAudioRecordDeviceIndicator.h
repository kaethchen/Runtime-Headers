@class CSAudioRecordContext, NSString;

@interface CSAudioRecordDeviceIndicator : NSObject

@property (readonly, nonatomic) CSAudioRecordContext *recordContext;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL shouldUseRemoteRecorder;
@property (readonly, nonatomic) unsigned long long streamHandleId;
@property (readonly, nonatomic) BOOL shouldUseSystemDaemonRecorder;

- (void).cxx_destruct;
- (void)updateDeviceId:(id)a0;
- (id)initWithRecordContext:(id)a0 deviceId:(id)a1 shouldUseRemoteRecorder:(BOOL)a2 streamHandleId:(unsigned long long)a3 shouldUseSystemDaemonRecorder:(BOOL)a4;
- (void)updateWithLatestRecordContext:(id)a0;

@end
