@class NSString;

@interface AVVCAggregateDevice : NSObject {
    unsigned int mAOPAudioDeviceID;
}

@property (readonly) unsigned int aggregateDeviceID;
@property (readonly) NSString *aggregateDeviceUID;

+ (unsigned int)GetAOPDeviceID:(BOOL)a0;
+ (BOOL)IsAOPDevicePresent;
+ (id)sharedAggregateDevice;

- (id)init;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)CreateDictionaryForDevice:(unsigned int)a0 enableTap:(BOOL)a1;
- (int)DestroyAggregateDevice;
- (unsigned int)GetBuiltinSpeakerDevice;
- (int)BuildAggregateDevice;

@end
