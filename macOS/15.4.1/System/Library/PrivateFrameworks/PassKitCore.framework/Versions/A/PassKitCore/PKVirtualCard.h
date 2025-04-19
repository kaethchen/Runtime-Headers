@class NSString, CNContact, NSData, NSDate, PKCurrencyAmount, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari;
@property (nonatomic) BOOL supportsLocalStorage;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) NSString *securityCodeIdentifier;
@property (copy, nonatomic) NSDate *securityCodeExpiration;
@property (nonatomic) BOOL hasDynamicSecurityCode;
@property (copy, nonatomic) CNContact *billingAddress;
@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *nameFromSafari;
@property (nonatomic) unsigned long long refreshType;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (nonatomic) long long balanceSource;
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials;
@property (readonly, copy, nonatomic) NSString *displayablePANSuffix;

+ (id)cardsForPaymentPass:(id)a0;
+ (id)cardsForPaymentPass:(id)a0 accordingToWebService:(id)a1;
+ (void)deleteAllLocalKeychainVirtualCards;
+ (id)demoVPANVirtualCards;
+ (void)queryKeychainForVirtualCards:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (void)deleteKeychainVirtualCard;
- (void)deleteLocalKeychainVirtualCard;
- (id)generateHashWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (BOOL)hasSensitiveCredentials;
- (id)initWithKeychainData:(id)a0;
- (BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (BOOL)isValidFromKeychain;
- (id)keychainVirtualCard;
- (id)mergeVirtualCardWith:(id)a0;
- (void)setContactNameEnteredInSafari:(id)a0 completion:(id /* block */)a1;
- (void)setLastAutoFilledBySafariWithCompletion:(id /* block */)a0;
- (void)writeKeychainVirtualCardToKeychain;

@end
