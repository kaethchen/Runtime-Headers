@interface _SEServiceManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)contentProcessWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)gpuProcessWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)networkProcessWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
