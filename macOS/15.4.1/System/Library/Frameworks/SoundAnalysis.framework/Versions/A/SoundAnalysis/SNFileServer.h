@class NSError;

@interface SNFileServer : NSObject {
    void /* unknown type, empty encoding */ server;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ rootDirectory;
}

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(void (^)(NSError *))a0;
- (id)initWithRootDirectory:(id)a0;

@end
