@class NSMutableArray;

@interface AVBMSRPTalker : AVBMRP {
    NSMutableArray *clients;
}

+ (id)IOClassName;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)serviceTerminated;
- (void)callbackWithArgs:(unsigned long long *)a0 argCount:(unsigned int)a1;
- (BOOL)deregisterStreamID:(unsigned long long)a0;
- (BOOL)registerStreamID:(unsigned long long)a0 destinationMac:(id)a1 vlanID:(unsigned short)a2 maxFrameSize:(unsigned short)a3 maxIntervalFrames:(unsigned short)a4 priority:(unsigned char)a5 rank:(unsigned char)a6 accumulatedLatency:(unsigned int)a7;

@end
