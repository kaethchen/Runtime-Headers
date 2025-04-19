@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;

@end
