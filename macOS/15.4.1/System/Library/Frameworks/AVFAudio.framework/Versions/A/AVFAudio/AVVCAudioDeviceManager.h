@interface AVVCAudioDeviceManager : NSObject {
    void *_impl;
}

@property (readonly) unsigned int inputDeviceID;
@property (readonly) unsigned int outputDeviceID;

+ (unsigned int)GetAudioDeviceWithWiredHeadset:(BOOL)a0;
+ (void)BuildAOPAggregateDevice;
+ (unsigned int)GetAOPDeviceAggregateID;
+ (unsigned int)GetAOPDeviceID;
+ (void)GetDevicesForActivationMode:(long long)a0 outRecordDevice:(unsigned int *)a1 outPlaybackDevice:(unsigned int *)a2;
+ (void)GetHALDeviceIdentifiersForDeviceUID:(id)a0 outHALDeviceUID:(id *)a1 outPluginDeviceUUID:(id *)a2;
+ (unsigned int)GetNumberOfInputChannels;
+ (BOOL)IsDeviceRunningSomewhere:(id)a0;
+ (BOOL)IsDoAPSupportedDevice:(id)a0;
+ (BOOL)IsSiriSupportedExternalDevice:(id)a0;
+ (unsigned int)GetAudioDeviceBuiltInMicrophone;
+ (void)DestroyAOPAggregateDevice;
+ (id)GetAOPDeviceAggregateUID;
+ (unsigned int)GetBuiltInAudioSpeakerDevice;
+ (unsigned int)GetDefaultAudioDevice:(BOOL)a0;
+ (BOOL)GetHALDeviceForBuiltInDevice:(id)a0 outHALDeviceID:(unsigned int *)a1 outHALDeviceUID:(id *)a2;
+ (unsigned int)GetNonAppleBluetoothSpeakerDevice;
+ (unsigned int)GetSiriSupportedExternalDevice;
+ (BOOL)IsAOPDevicePresent;
+ (BOOL)IsDeviceBuiltIn:(id)a0;
+ (BOOL)IsDeviceRunningSomewhereElse:(id)a0;
+ (BOOL)IsHALDevice:(id)a0;
+ (id)getBundleIDFromProcessObjectID:(unsigned int)a0;
+ (void)setMute:(BOOL)a0 onDevice:(unsigned int)a1 isInputDevice:(BOOL)a2;
+ (void)UpdateAOPDeviceID;
+ (void)addReporterID:(long long)a0 toDevice:(id)a1;
+ (id)findHALDeviceUIDFromUUID:(id)a0;
+ (float)gainOnDevice:(unsigned int)a0;
+ (id)getAuditTokenFromProcessObjectID:(unsigned int)a0;
+ (id)getDeviceName:(id)a0;
+ (int)getPIDFromProcessObjectID:(unsigned int)a0;
+ (id)getRecordingAuditTokenList;
+ (id)getRecordingBundleIDList;
+ (id)getRecordingPIDList;
+ (id)getUUIDFromBTHALDevice:(id)a0;
+ (BOOL)isDeviceMuted:(unsigned int)a0 isInputDevice:(BOOL)a1;
+ (BOOL)isProcessInputRunning:(unsigned int)a0;
+ (void)iterateOverProcessObjectList:(id /* block */)a0;
+ (void)removeReporterID:(long long)a0 fromDevice:(id)a1;
+ (int)setBufferSize:(int)a0 onDevice:(id)a1;
+ (void)setClientDescriptionKind:(unsigned int)a0 onDevice:(unsigned int)a1;
+ (void)setGain:(float)a0 onDevice:(unsigned int)a1;
+ (void)setReporterIDs:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a0 onDevice:(id)a1;
+ (void)suppressRecordingIndicator:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)initWithError:(id *)a0;
- (id)initWithActivationContext:(id)a0 withError:(id *)a1;
- (void)selectDeviceForActivationMode:(id)a0;

@end
