@class NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCloudAccountOperation : NSOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBlock:(id /* block */)a0 clientQueue:(id)a1;

@end
