@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;

@end
