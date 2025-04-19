@class CHSChronoServicesConnection;

@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;

@end
