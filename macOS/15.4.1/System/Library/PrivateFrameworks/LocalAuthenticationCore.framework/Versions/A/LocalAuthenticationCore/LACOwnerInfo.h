@interface LACOwnerInfo : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) id /* block */ invalidationBlock;
@property (readonly, weak, nonatomic) id proxy;

- (void).cxx_destruct;
- (id)initWithProcessId:(int)a0 proxy:(id)a1 invalidationBlock:(id /* block */)a2;

@end
