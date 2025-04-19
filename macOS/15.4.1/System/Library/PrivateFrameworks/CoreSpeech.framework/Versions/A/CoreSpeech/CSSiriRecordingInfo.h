@class NSString, NSDictionary, CSFAudioRecordDeviceInfo;
@protocol AFBluetoothDevice;

@interface CSSiriRecordingInfo : NSObject {
    NSString *_headsetAddress;
}

@property (readonly, nonatomic) BOOL isDictation;
@property (readonly, nonatomic) BOOL isFingerprintOnly;
@property (readonly, nonatomic) BOOL isSecureOfflineOnly;
@property (readonly, nonatomic) long long audioAlertStyle;
@property (readonly, nonatomic) NSString *codec;
@property (readonly, nonatomic) BOOL codecIsNarrowband;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) int mhSource;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *route;
@property (readonly, nonatomic) CSFAudioRecordDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *dspStatus;
@property (readonly, nonatomic) NSString *headsetAddress;
@property (readonly, nonatomic) NSString *headsetName;
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly, nonatomic) BOOL isBluetooth;
@property (readonly, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) NSString *productId;
@property (readonly, nonatomic) double activationAlertStartTimestamp;
@property (readonly, nonatomic) double startRecordingTimestamp;
@property (readonly, nonatomic) double firstBufferTimestamp;
@property (readonly, nonatomic) unsigned long long firstBufferHostTime;
@property (readonly, nonatomic) unsigned long long estimatedSpeechEndHostTime;
@property (readonly, nonatomic) BOOL isDucking;
@property (nonatomic) BOOL isEndAlertInfo;
@property (nonatomic) BOOL triggeredTwoShotBorealis;
@property (nonatomic) unsigned long long audioSessionSetActiveEndHostTime;
@property (readonly, nonatomic) id<AFBluetoothDevice> bluetoothDevice;
@property (readonly, nonatomic) long long speechEvent;

- (void).cxx_destruct;
- (id)_bluetoothDeviceInfo;
- (void)_fetchBTInfo;
- (id)initWithDictation:(BOOL)a0 codec:(id)a1;
- (id)initWithDictation:(BOOL)a0 fingerprintOnly:(BOOL)a1 secureOfflineOnly:(BOOL)a2 audioAlertStyle:(long long)a3 recordSettings:(id)a4 recordRoute:(id)a5 recordDeviceInfo:(id)a6 playbackRoute:(id)a7 audioDeviceID:(unsigned int)a8 voiceTriggerEventInfo:(id)a9 activationAlertStartTimestamp:(double)a10 startRecordingTimestamp:(double)a11 firstBufferTimestamp:(double)a12 firstBufferHostTime:(unsigned long long)a13 estimatedSpeechEndHostTime:(unsigned long long)a14 deviceIdentifier:(id)a15 includeBTInfo:(BOOL)a16 speechEvent:(long long)a17;

@end
