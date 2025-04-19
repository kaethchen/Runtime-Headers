@class NSString, NSURL, PKIdentityProofingDisplayMessage;

@interface PKIdentityProofingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) long long target;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSString *accountKeyIdentifier;
@property (nonatomic) long long idType;
@property (retain, nonatomic) NSURL *learnMoreURL;
@property (retain, nonatomic) PKIdentityProofingDisplayMessage *proofingErrorMessage;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)_mutableDictionaryRepresentation;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 learnMoreURL:(id)a8;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 learnMoreURL:(id)a8 proofingErrorMessage:(id)a9;
- (BOOL)isEqualToConfig:(id)a0;

@end
