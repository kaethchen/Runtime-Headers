@class NSString;

@interface MRGetVolumeMutedMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0;

@end
