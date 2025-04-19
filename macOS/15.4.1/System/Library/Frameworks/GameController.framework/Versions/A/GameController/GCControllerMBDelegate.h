@interface GCControllerMBDelegate : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)stopScan;
- (void)fireCompletionHandler;
- (void)startScan;

@end
