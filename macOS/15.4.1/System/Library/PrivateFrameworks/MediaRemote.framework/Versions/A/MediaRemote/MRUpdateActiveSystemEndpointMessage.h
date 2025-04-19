@class MRUpdateActiveSystemEndpointRequest;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (readonly, nonatomic) MRUpdateActiveSystemEndpointRequest *request;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithRequest:(id)a0;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
