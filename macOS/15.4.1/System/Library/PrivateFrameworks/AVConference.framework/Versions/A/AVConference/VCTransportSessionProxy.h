@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}

- (void)start;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (id)initWithTransportSessionID:(unsigned int)a0;
- (BOOL)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;

@end
