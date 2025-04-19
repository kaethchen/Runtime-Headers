@interface _PKProvisioningSEStorageManager : NSObject {
    void /* unknown type, empty encoding */ secureElement;
    void /* unknown type, empty encoding */ webService;
}

- (id)init;
- (void).cxx_destruct;
- (void)currentSnapshotWithCompletion:(id /* block */)a0;
- (void)debugReservationDescriptionsWithCompletion:(id /* block */)a0;
- (void)deleteExpiredReservationsWithCompletion:(id /* block */)a0;
- (void)deleteWithReservation:(id)a0 completion:(id /* block */)a1;
- (id)initWithWebService:(id)a0;
- (void)performDebugSECleanupWithCompletion:(id /* block */)a0;
- (void)reserveStorageFor:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;

@end
