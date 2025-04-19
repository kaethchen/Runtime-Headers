@class _PKProvisioningSEStorageManager;

@interface PKProvisioningSEStorageManager : NSObject {
    _PKProvisioningSEStorageManager *_manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)debugPerformSECleanup:(id /* block */)a0;
- (void)debugReservationDescriptions:(id /* block */)a0;
- (void)deleteReservation:(id)a0 completion:(id /* block */)a1;
- (id)initWithWebService:(id)a0;
- (void)reserveStorageForAppletTypes:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;

@end
