@interface HomeKitCore.XPCPublisher : NSObject <HomeKitCore.XPCModelPublisherInterface> {
    void /* unknown type, empty encoding */ cancelationHandler;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;

@end
