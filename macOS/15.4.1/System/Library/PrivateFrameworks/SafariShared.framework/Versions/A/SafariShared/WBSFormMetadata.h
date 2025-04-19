@class NSNumber, NSString, NSDictionary, NSURL, NSArray, NSData, WBSFormControlMetadata;

@interface WBSFormMetadata : NSObject <NSSecureCoding, NSMutableCopying> {
    NSNumber *_containsAtLeastOneSecureTextField;
    unsigned long long _type;
    NSArray *_controls;
    NSString *_userNameElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *passwordRequirements;
@property (readonly, nonatomic) BOOL allowsAutocomplete;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID;
@property (readonly, nonatomic) BOOL containsActiveElement;
@property (readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (readonly, nonatomic) NSURL *action;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic) long long uniqueID;
@property (readonly, nonatomic) NSString *logicalFormElementSelector;
@property (readonly, nonatomic, getter=isBestForPageLevelAutoFill) BOOL bestForPageLevelAutoFill;
@property (readonly, nonatomic, getter=isBestForStreamlinedLogin) BOOL bestForStreamlinedLogin;
@property (readonly, nonatomic, getter=isEligibleForAutomaticLogin) BOOL eligibleForAutomaticLogin;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) BOOL usesRelAsync;
@property (readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *passwordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *textSample;
@property (readonly, copy, nonatomic) NSString *userNameElementUniqueID;
@property (readonly, nonatomic) BOOL usesGeneratedPassword;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) BOOL isSearchForm;
@property (readonly, nonatomic) BOOL containsAtLeastOneSecureTextField;
@property (readonly, nonatomic) BOOL containsClassifications;
@property (readonly, nonatomic) NSArray *uniqueIDsOfPasswordControlAndRelatedControls;
@property (readonly, nonatomic) NSString *userNameFieldValue;
@property (readonly, nonatomic) NSString *passwordFieldValue;
@property (readonly, nonatomic) WBSFormControlMetadata *bestControlForStreamlinedLoginFocus;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSData *serializedData;

+ (id)formMetadataFromSerializedData:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_init;
- (id)initWithMetadata:(id)a0;
- (id)_valueOfControlWithUniqueID:(id)a0;
- (id)dictionaryRepresentationRedactingSensitiveValues:(BOOL)a0 withKnownSensitiveValues:(id)a1;
- (id)formMetadataByReplacingControlsWith:(id)a0;
- (id)initWithJSValue:(id)a0;

@end
