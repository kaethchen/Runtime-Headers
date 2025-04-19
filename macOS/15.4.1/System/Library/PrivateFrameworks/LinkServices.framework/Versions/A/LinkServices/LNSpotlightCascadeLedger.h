@class NSString, NSURL, BMFileBackedDictionary;

@interface LNSpotlightCascadeLedger : NSObject {
    BMFileBackedDictionary *_dictionary;
    NSURL *_directory;
    BOOL _deleted;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)_loadLedgerFileInDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)version;
- (unsigned short)_options;
- (id)_boxedVersion:(unsigned long long)a0;
- (BOOL)_isDeleted;
- (BOOL)abandonDonationType:(unsigned char)a0 error:(id *)a1;
- (BOOL)attemptDonationType:(unsigned char)a0 error:(id *)a1;
- (BOOL)completeDonationType:(unsigned char)a0 version:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)countAttemptsOfDonationType:(unsigned char)a0;
- (BOOL)deferAttemptOfDonationType:(unsigned char)a0 error:(id *)a1;
- (BOOL)deleteLedger:(id *)a0;
- (id)initWithDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)isInitialFullDonationRequired;
- (BOOL)isRecoveryFullDonationRequired;
- (BOOL)resetLedger:(id *)a0;

@end
