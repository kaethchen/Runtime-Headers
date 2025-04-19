@class NSString;

@interface MCCCategoryContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *senderEmail;
@property (copy, nonatomic) NSString *receiverEmail;
@property (copy, nonatomic) NSString *emailSubject;
@property (nonatomic) BOOL isUnsubscribeHeaderPresent;
@property (nonatomic) BOOL isSenderVIP;
@property (nonatomic) BOOL isSenderInAddressBook;
@property (nonatomic) BOOL isSenderRecentContact;
@property (nonatomic) BOOL isSenderPrimary;
@property (nonatomic) BOOL isNonPersonalAccount;
@property (copy, nonatomic) NSString *localRuleCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;

@end
