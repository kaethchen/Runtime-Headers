@class CHSChronoServicesConnection;

@interface CHSInteractionEventService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)applicationEnteredForegroundWithBundleID:(id)a0;
- (void)userEnteredAddGalleryForHost:(id)a0;

@end
