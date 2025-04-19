@class NSArray, AVAudioHardwareObject;

@interface AVAudioHardwareObjectChangeEvent : NSObject

@property (retain, nonatomic) AVAudioHardwareObject *changedObject;
@property (retain, nonatomic) NSArray *namedProperties;
@property (retain, nonatomic) NSArray *customProperties;

- (id)init;
- (void).cxx_destruct;

@end
