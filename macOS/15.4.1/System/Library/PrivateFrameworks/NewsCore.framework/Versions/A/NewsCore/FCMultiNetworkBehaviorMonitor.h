@class NSString, NFMultiDelegate;

@interface FCMultiNetworkBehaviorMonitor : NSObject <FCNetworkBehaviorMonitor>

@property (readonly, nonatomic) NFMultiDelegate *multiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeMonitor:(id)a0;
- (void)addMonitor:(id)a0;
- (void)logNetworkEvent:(id)a0;

@end
