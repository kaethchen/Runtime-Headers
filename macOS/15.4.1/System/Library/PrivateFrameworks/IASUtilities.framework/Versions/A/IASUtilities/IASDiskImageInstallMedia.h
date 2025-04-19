@class NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface IASDiskImageInstallMedia : IASInstallMedia

@property void *diskImage;
@property (retain) NSDictionary *mountInfo;
@property (copy) NSURL *mountPoint;
@property (retain) NSObject<OS_dispatch_queue> *attachQueue;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_updateProperties;
- (void)attachWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)detachWithOptions:(id)a0 completion:(id /* block */)a1;

@end
