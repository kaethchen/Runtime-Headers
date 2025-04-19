@interface HomeKitDaemon.HomeMatterServicesCoordinator : NSObject <HMDHomeMatterServicesCoordinator> {
    void /* unknown type, empty encoding */ featuresDataSource;
    void /* unknown type, empty encoding */ matterServer;
}

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (void)stopWithCompletionHandler:(void (^)(void))a0;

@end
