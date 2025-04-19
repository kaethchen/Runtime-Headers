@class NSObject;
@protocol OS_dispatch_group;

@interface AXFDispatchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_group;

- (id)init;
- (void).cxx_destruct;
- (void)wait;
- (BOOL)waitWithTimeout:(long long)a0;
- (void)enter;
- (void)leave;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end
