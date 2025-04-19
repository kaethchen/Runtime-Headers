@class NSString, NSDate;

@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *inviteEmail;
@property (copy, nonatomic) NSDate *inviteDate;
@property (nonatomic) BOOL displayedNotification;
@property (copy, nonatomic) NSString *altDSID;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToAccountPendingFamilyMember:(id)a0;
- (id)initWithPendingFamilyMember:(id)a0 accountIdentifier:(id)a1;

@end
