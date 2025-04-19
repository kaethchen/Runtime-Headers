@interface Rapport.RPIRKRatchet : NSObject {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ locallyPermanent;
    void /* unknown type, empty encoding */ sameAccountDevices;
    void /* unknown type, empty encoding */ managedAccounts;
    void /* unknown type, empty encoding */ contacts;
}

+ (id)ratchetedIRKDataForIdentity:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStarting:(id)a0 locallyPermanentSeed:(id)a1 sameAccountDevicesRevision:(long long)a2 managedAccountsRevision:(long long)a3 contactsRevision:(long long)a4;

@end
