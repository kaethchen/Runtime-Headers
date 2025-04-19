@interface MultitouchDeviceObserver : NSObject

@property (readonly) long long attachedDevices;

+ (id)sharedObserver;

- (long long)attachedDevices;
- (struct __CFDictionary { } *)_createHapticTrackpadMatchingDictionary;

@end
