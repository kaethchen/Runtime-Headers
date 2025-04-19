@interface PKIdentityAuthorizationController : NSObject

- (id)init;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end
