@class NSLock, NSMutableDictionary, NSArray;

@interface ASDTDeviceList : NSObject

@property (retain, nonatomic) NSMutableDictionary *audioDeviceDict;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *interestsDict;
@property (readonly, nonatomic) NSArray *audioDevices;

- (id)init;
- (void).cxx_destruct;
- (void)addAudioDevice:(id)a0;
- (void)removeAudioDevice:(id)a0;
- (void)addAudioDevices:(id)a0;
- (void)removeAudioDevices:(id)a0;
- (BOOL)addAudioDeviceWithCheck:(id)a0;
- (id)getAudioDeviceWithUID:(id)a0;
- (void)notifyOfInterest:(int)a0 forDevice:(id)a1;
- (void)registerObject:(id)a0 withInterests:(int)a1 forUID:(id)a2;
- (void)removeAudioDeviceWithUID:(id)a0;

@end
