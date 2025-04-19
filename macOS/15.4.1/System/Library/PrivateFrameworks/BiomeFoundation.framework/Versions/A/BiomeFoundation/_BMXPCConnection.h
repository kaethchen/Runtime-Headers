@class NSString, _BMXPCTransport;

@interface _BMXPCConnection : NSXPCConnection {
    NSString *_serviceName;
    _BMXPCTransport *_transport;
    unsigned long long _flags;
}

- (void).cxx_destruct;
- (void)_setTargetUserIdentifier:(unsigned int)a0;
- (id)_errorDescription;
- (id)_initWithConnection:(id)a0 queue:(id)a1 flags:(unsigned long long)a2;
- (id)bm_transport;

@end
