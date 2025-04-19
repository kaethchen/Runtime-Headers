@class NSString;

@interface KDLIOKitClient : NSObject <KDLTransport> {
    unsigned int _connect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connect;
- (long long)currentKDLVersion;
- (unsigned int)listOffendingKexts:(id *)a0 forService:(long long)a1;
- (unsigned int)performCommand:(unsigned long long)a0 inData:(const void *)a1 inSize:(unsigned long long)a2 outData:(void *)a3 outSize:(unsigned long long *)a4;
- (unsigned int)queryCurrentState:(unsigned long long *)a0 forService:(long long)a1;
- (unsigned int)updateKDLFromPath:(id)a0;

@end
