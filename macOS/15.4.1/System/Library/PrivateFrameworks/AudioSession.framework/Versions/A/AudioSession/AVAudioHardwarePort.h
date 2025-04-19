@class NSString, NSArray, AVAudioHardwareDevice;

@interface AVAudioHardwarePort : AVAudioHardwareObject

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) NSString *UID;
@property (readonly, weak, nonatomic) AVAudioHardwareDevice *owningDevice;
@property (readonly, weak, nonatomic) NSArray *streams;
@property (readonly, nonatomic) BOOL hasHardwareVoiceCallProcessing;

@end
