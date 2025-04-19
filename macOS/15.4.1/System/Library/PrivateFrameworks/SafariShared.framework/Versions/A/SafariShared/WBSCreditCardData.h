@class NSString, PKVirtualCard, NSDictionary, NSDate;

@interface WBSCreditCardData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardNumber;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardSecurityCode;
@property (nonatomic) BOOL promptToSaveSecurityCode;
@property (readonly, nonatomic) PKVirtualCard *virtualCard;
@property (readonly, nonatomic) BOOL isVirtualCard;
@property (readonly) BOOL shouldHide;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_expirationDateFormatter;
- (BOOL)hasSameCreditCardInformationAs:(id)a0;
- (id)initWithKeychainRepresentation:(id)a0;
- (id)_expirationDateFromPKVirtualCard:(id)a0;
- (id)_expirationDateFromPKVirtualCardCredentials:(id)a0;
- (id)creditCardDataByMergingOtherAttributesBesidesCardNumberFromCard:(id)a0 mergeSecurityCode:(BOOL)a1 updateExpirationDate:(BOOL)a2;
- (id)creditCardDataByUpdatingLastUsedDate:(id)a0;
- (BOOL)expirationYearIsOlderThan:(id)a0;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3 securityCode:(id)a4;
- (id)initWithVirtualCard:(id)a0;
- (id)initWithVirtualCardCredentials:(id)a0 virtualCard:(id)a1;
- (BOOL)isEqualToImportedCard:(id)a0;
- (id)keychainRepresentationByMigratingExistingKeychainData:(id)a0;
- (id)keychainRepresentationForNewCard;
- (void)test_setLastUsedDate:(id)a0;

@end
