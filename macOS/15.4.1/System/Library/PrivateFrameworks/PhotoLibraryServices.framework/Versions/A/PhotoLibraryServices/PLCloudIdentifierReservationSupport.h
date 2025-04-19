@class NSMutableDictionary;

@interface PLCloudIdentifierReservationSupport : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_reservedEntityIdentifiersByBundle;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)takeReservedCloudIdentifierWithEntityName:(id)a0 uuid:(id)a1 clientBundleIdentifier:(id)a2 error:(id *)a3;
- (id)_lock_reservedIdentifiersForEntityName:(id)a0 clientBundleIdentifier:(id)a1;
- (BOOL)cancelReservedCloudIdentifiersWithEntityName:(id)a0 clientBundleIdentifier:(id)a1 error:(id *)a2;
- (id)reserveCloudIdentifierUUIDsWithEntityName:(id)a0 count:(unsigned long long)a1 clientBundleIdentifier:(id)a2 error:(id *)a3;
- (id)reservedCloudIdentifierUUIDsWithEntityName:(id)a0 clientBundleIdentifier:(id)a1 error:(id *)a2;

@end
