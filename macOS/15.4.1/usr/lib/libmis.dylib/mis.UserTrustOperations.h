@interface mis.UserTrustOperations : NSObject {
    void /* unknown type, empty encoding */ utdb;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAuxiliarySignatureWithTeamId:(id)a0 error:(id *)a1;
- (id)getUserTrustedUUIDsAndReturnError:(id *)a0;
- (id)profileEntryExistsWithUuidString:(id)a0 error:(id *)a1;

@end
