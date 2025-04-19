@interface OpenAPIURLSessionInternal.HTTPBodyOutputStreamBridge : NSObject <NSStreamDelegate> {
    void /* unknown type, empty encoding */ httpBody;
    void /* unknown type, empty encoding */ outputStream;
    void /* unknown type, empty encoding */ state;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
