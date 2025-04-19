@class NSMutableArray, IOBluetoothDevice;

@interface IOBluetoothAudioManager : NSObject {
    int _audioConnectAttempt;
}

@property (retain) IOBluetoothDevice *audioDeviceConnecting;
@property (retain) NSMutableArray *audioDevicesToConnect;

+ (void)addAudioDevice:(id)a0;
+ (void)audioState:(id /* block */)a0;
+ (void)audioState:(id)a0 callback:(id /* block */)a1;
+ (id)bluetoothDevice:(unsigned int)a0;
+ (void)call:(id)a0 isIncoming:(BOOL)a1;
+ (void)callAccepted:(id)a0;
+ (void)callEnded:(id)a0;
+ (void)configureAudioDevice:(id)a0;
+ (unsigned int)currentSystemInput;
+ (unsigned int)currentSystemOutput;
+ (unsigned int)defaultDeviceIDForOutput:(BOOL)a0;
+ (void)disconnectAudioDevice:(id)a0;
+ (void)getDefaults:(id /* block */)a0;
+ (BOOL)isBluetoothDevice:(unsigned int)a0;
+ (void)removeAudioDevice:(id)a0;
+ (void)resetDefaults;
+ (unsigned int)serviceForAddressString:(id)a0;
+ (BOOL)setAudioDevice:(unsigned int)a0 isOutput:(BOOL)a1;
+ (void)setDefaultDouble:(double)a0 forKey:(id)a1;
+ (void)setDefaultInteger:(long long)a0 forKey:(id)a1;
+ (id)sharedAudioManager;
+ (void)startPFC:(id)a0;

- (void).cxx_destruct;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)cancelConnectToAudioDevice;
- (void)connectToAudioDevice;
- (void)connectToAudioDevice:(id)a0;

@end
