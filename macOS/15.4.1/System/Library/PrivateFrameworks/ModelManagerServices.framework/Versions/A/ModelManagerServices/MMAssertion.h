@class NSError;

@interface MMAssertion : NSObject {
    void /* unknown type, empty encoding */ policy;
    void /* unknown type, empty encoding */ desc;
    void /* unknown type, empty encoding */ assertion;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidateWithCompletionHandler:(void (^)(void))a0;
- (void)acquireWithCompletionHandler:(void (^)(NSError *))a0;
- (id)initWithPolicy:(id)a0 description:(id)a1;

@end
