@interface CSAudioInjectionServices : NSObject

+ (id)GetConnectionForDaemon:(int)a0;
+ (BOOL)audioInjectionEnabled;
+ (void)connectDeviceWithUUID:(id)a0 completion:(id /* block */)a1;
+ (void)connectDeviceWithUUID:(id)a0 handlingDaemon:(int)a1 completion:(id /* block */)a2;
+ (void)createAudioInjectionDeviceWithType:(long long)a0 deviceName:(id)a1 deviceID:(id)a2 productID:(id)a3 completion:(id /* block */)a4;
+ (void)createAudioInjectionDeviceWithType:(long long)a0 deviceName:(id)a1 deviceID:(id)a2 productID:(id)a3 handlingDaemon:(int)a4 completion:(id /* block */)a5;
+ (void)disconnectDeviceWithUUID:(id)a0 completion:(id /* block */)a1;
+ (void)disconnectDeviceWithUUID:(id)a0 handlingDaemon:(int)a1 completion:(id /* block */)a2;
+ (id)getAudioInjectionXPCConnectionForCoreSpeechD;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 completion:(id /* block */)a2;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 handlingDaemon:(int)a2 completion:(id /* block */)a3;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withNumChannels:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withNumChannels:(unsigned long long)a2 handlingDaemon:(int)a3 completion:(id /* block */)a4;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withNumChannels:(unsigned long long)a2 withUserIntentOptions:(id)a3 completion:(id /* block */)a4;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withNumChannels:(unsigned long long)a2 withUserIntentOptions:(id)a3 handlingDaemon:(int)a4 completion:(id /* block */)a5;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withfadingTimeWindowLength:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withfadingTimeWindowLength:(unsigned long long)a2 handlingDaemon:(int)a3 completion:(id /* block */)a4;
+ (void)pingpong:(id)a0 completion:(id /* block */)a1;
+ (void)primaryInputDeviceUUIDWithCompletion:(id /* block */)a0;
+ (void)primaryInputDeviceUUIDWithhandlingDaemon:(int)a0 WithCompletion:(id /* block */)a1;
+ (BOOL)setAudioInjectionMode:(BOOL)a0;

@end
