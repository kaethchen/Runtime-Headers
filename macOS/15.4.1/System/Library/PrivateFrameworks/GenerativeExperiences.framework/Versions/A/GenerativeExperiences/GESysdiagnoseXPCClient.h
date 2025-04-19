@class NSString, NSError;

@interface GESysdiagnoseXPCClient : NSObject {
    void /* unknown type, empty encoding */ client;
}

- (id)init;
- (void).cxx_destruct;
- (void)diagnosticsWithCompletionHandler:(void (^)(NSString *, NSError *))a0;

@end
