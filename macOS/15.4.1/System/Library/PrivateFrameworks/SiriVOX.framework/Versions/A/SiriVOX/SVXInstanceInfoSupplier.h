@class SVXClientServiceRemoteDelegateSupplier, AFInstanceInfo;
@protocol SVXPerforming;

@interface SVXInstanceInfoSupplier : NSObject {
    id<SVXPerforming> _performer;
    SVXClientServiceRemoteDelegateSupplier *_remoteDelegateSupplier;
}

@property (readonly, nonatomic) AFInstanceInfo *cacheInstanceInfo;

- (void).cxx_destruct;
- (void)_updateInstanceInfo:(id)a0;
- (void)getInstanceInfoWithConnection:(id)a0 completion:(id /* block */)a1;
- (id)initWithRemoteDelegateSupplier:(id)a0 performer:(id)a1;

@end
