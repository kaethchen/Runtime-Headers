@class NSString;

@interface MRSetListeningModeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *listeningMode;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithListeningMode:(id)a0 outputDeviceUID:(id)a1;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
