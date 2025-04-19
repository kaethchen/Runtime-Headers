@interface TeaFoundation.BridgedCallbackRegistration : NSObject <TFCallbackRegistration> {
    void /* unknown type, empty encoding */ callback;
}

- (id)init;
- (void).cxx_destruct;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;

@end
