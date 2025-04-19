@interface HistoryConnectionProxyHolder : NSObject

@property (class, readonly) BOOL isHoldingProxy;

+ (id)sharedProxy;
+ (void)storeAndPreWarmProxy:(id)a0;

@end
