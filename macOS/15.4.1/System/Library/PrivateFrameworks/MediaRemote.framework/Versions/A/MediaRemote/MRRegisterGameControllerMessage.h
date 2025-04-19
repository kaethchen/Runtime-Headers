@class _MRGameControllerPropertiesProtobuf;

@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;

- (unsigned long long)type;
- (id)initWithProperties:(id)a0;

@end
