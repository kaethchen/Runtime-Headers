@class NSArray, NSString;

@interface WBSMutableFormMetadata : WBSFormMetadata

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *controls;
@property (copy, nonatomic) NSString *userNameElementUniqueID;
@property (copy, nonatomic) NSString *passwordElementUniqueID;
@property (copy, nonatomic) NSString *confirmPasswordElementUniqueID;
@property (copy, nonatomic) NSString *oldPasswordElementUniqueID;
@property (copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;

- (void)setType:(unsigned long long)a0;
- (void)setControls:(id)a0;
- (void)setConfirmPasswordElementUniqueID:(id)a0;
- (void)setFirstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID:(id)a0;
- (void)setOldPasswordElementUniqueID:(id)a0;
- (void)setPasswordElementUniqueID:(id)a0;
- (void)setUserNameElementUniqueID:(id)a0;

@end
