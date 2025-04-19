@class NSMutableArray;

@interface AVBMSRPListener : AVBMRP {
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
- (BOOL)registerStreamID:(unsigned long long)a0;

@end
