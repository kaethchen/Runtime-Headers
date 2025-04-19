@class NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRAttributeReportDistributorRegistry : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ receiver;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 receiver:(id /* block */)a1;

@end
