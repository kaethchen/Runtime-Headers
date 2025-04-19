@class NSString;

@interface AVAudioHardwareStreamIdentifier : NSObject

@property (readonly, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) unsigned long long streamIndex;

- (void).cxx_destruct;

@end
