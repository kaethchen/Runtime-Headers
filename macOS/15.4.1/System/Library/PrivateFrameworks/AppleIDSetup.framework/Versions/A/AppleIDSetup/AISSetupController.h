@class __AISSetupController, NSObject;
@protocol OS_dispatch_queue;

@interface AISSetupController : NSObject

@property (retain, nonatomic) __AISSetupController *implementation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setupWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
