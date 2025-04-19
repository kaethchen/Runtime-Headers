@class __AISRepairController, NSObject;
@protocol OS_dispatch_queue;

@interface AISRepairController : NSObject

@property (retain, nonatomic) __AISRepairController *implementation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)generateSymptomReportWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)repairWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
