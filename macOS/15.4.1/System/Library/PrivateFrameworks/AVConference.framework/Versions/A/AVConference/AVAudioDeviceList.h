@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (BOOL)setInputDevice:(id)a0;
+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (void)dealloc;
- (id)init;
- (id)devices;
- (id)outputDevices;
- (id)inputDevices;

@end
