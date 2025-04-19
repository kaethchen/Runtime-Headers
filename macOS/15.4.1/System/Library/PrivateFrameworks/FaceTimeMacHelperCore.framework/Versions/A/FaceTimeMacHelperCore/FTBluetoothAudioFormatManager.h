@interface FTBluetoothAudioFormatManager : NSObject

+ (id)sharedInstance;

- (BOOL)audioDeviceSupportsStereoHFP:(unsigned long long)a0;
- (void)setBTAudioFormat:(unsigned long long)a0 deviceID:(unsigned long long)a1;

@end
