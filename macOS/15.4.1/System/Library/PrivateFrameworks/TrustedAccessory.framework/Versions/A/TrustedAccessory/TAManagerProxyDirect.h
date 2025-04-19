@class NSObject;
@protocol OS_dispatch_source;

@interface TAManagerProxyDirect : TAManagerProxy {
    unsigned int _service;
    unsigned int _connect;
    struct IONotificationPort { } *_notifyPort;
    NSObject<OS_dispatch_source> *_dispatchSource;
    BOOL _connected;
}

+ (id)proxy;

- (void)dealloc;
- (void).cxx_destruct;
- (int)initializeConnection;
- (int)performCommand:(unsigned short)a0 method:(unsigned int)a1 version:(unsigned short)a2 inValue:(unsigned short)a3 inData:(const void *)a4 inSize:(unsigned long long)a5 outData:(void *)a6 outSize:(unsigned long long *)a7;

@end
