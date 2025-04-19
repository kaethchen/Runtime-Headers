@interface BERenderingProcess : NSObject {
    void /* unknown type, empty encoding */ inner;
}

+ (void)renderingProcessWithBundleID:(id)a0 interruptionHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)renderingProcessWithInterruptionHandler:(id /* block */)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)grantCapability:(id)a0 error:(id *)a1;
- (id)grantCapability:(id)a0 error:(id *)a1 invalidationHandler:(id /* block */)a2;
- (id)makeLibXPCConnectionError:(id *)a0;

@end
