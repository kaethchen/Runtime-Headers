@class NSURLResponse, NSData, NSError, NSURLRequest;

@interface CoreCDPUI.EDPTokenSpyglassViewDataSource : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ urlRequest;
    void /* unknown type, empty encoding */ resourceLoadDelegate;
    void /* unknown type, empty encoding */ authController;
    void /* unknown type, empty encoding */ accountStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)dataFromAKURLSessionUsing:(NSURLRequest *)a0 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))a1;

@end
