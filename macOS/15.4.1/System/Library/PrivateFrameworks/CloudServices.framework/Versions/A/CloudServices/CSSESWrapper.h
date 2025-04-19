@class AppleIDPasswordMetadata, NSString, NSDictionary, NSData, NSDate;

@interface CSSESWrapper : NSObject

@property (nonatomic) int reqVersion;
@property (readonly, nonatomic) struct ckvr_srp_context { struct ccrng_state *x0; struct ccdigest_info *x1; struct ccmode_cbc *x2; struct ccmode_cbc *x3; struct ccmode_gcm *x4; struct ccmode_gcm *x5; struct ccsrp_ctx *x6; } *ckvr;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recoveryPassphrase;
@property (nonatomic) BOOL recoveryPassphraseMutable;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *decodedLabel;
@property (copy, nonatomic) NSDate *escrowDate;
@property (retain, nonatomic) NSData *escrowBlob;
@property (readonly) BOOL useAppleIDPassword;
@property (retain, nonatomic) AppleIDPasswordMetadata *appleIDPasswordMetadata;
@property (retain) NSData *recoveryBlob;

- (void)dealloc;
- (void).cxx_destruct;
- (id)decodedEscrowRecordFromData:(id)a0 stingray:(BOOL)a1 env:(id)a2 duplicate:(BOOL)a3 error:(id *)a4;
- (id)derivePassword;
- (id)derivePasswordGuitarfish;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;
- (id)encodedEscrowRecordWithPublicKeyBytes:(id)a0 error:(id *)a1;
- (id)initWithDSID:(id)a0 escrowRecordContents:(id)a1 recoveryPassphrase:(id)a2 recordID:(id)a3 recordLabel:(id)a4 useAppleIDPassword:(BOOL)a5 appleIDPasswordMetadata:(id)a6 reqVersion:(int)a7;
- (id)initWithRequest:(id)a0 reqVersion:(int)a1;
- (id)initWithRequest:(id)a0 validate:(BOOL)a1 reqVersion:(int)a2;
- (id)recoveryResponseForBlob:(id)a0;
- (id)srpInitBlob;
- (unsigned long long)srpKeySize;
- (unsigned long long)srpPublicKeySize;
- (id)srpRecoveryBlobFromData:(id)a0 error:(id *)a1;
- (void)srpRecoveryUpdateDSID:(id)a0 recoveryPassphrase:(id)a1;
- (id)srpResponseForEscrowBlob:(id)a0 withFullCCKey:(struct ccrsa_full_ctx { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a1;
- (BOOL)validatePassphrasePresentOrPending;

@end
