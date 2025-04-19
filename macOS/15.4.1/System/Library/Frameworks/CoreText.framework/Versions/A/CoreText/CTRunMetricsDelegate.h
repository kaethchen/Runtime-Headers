@interface CTRunMetricsDelegate : NSObject

@property (copy) id /* block */ beginClusterModificationHandler;
@property (copy) id /* block */ clusterModificationHandler;
@property (copy) id /* block */ endClusterModificationHandler;

- (void)dealloc;

@end
