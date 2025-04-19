@interface FAOSUpdatedActivity : NSObject {
    void /* unknown type, empty encoding */ scheduler;
}

- (id)init;
- (void).cxx_destruct;
- (void)unregister;
- (void)checkinWithCompletionHandler:(void (^)(void))a0;
- (id)initWithHeartbeatActivityHandler:(id /* block */)a0;

@end
