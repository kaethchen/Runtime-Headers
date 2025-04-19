@class NSDate, PKSpendingInsightTrend, NSArray, PKFamilyMember, NSSet, NSString, CNContact, PKCurrencyAmount, PKPaymentTransactionTag, PKMerchant, PKAccountUser, PKSearchQuery;

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long merchantCategory;
@property (nonatomic) PKSpendingInsightTrend *trend;
@property (retain, nonatomic) PKPaymentTransactionTag *tag;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) NSSet *handles;
@property (retain, nonatomic) NSArray *regions;
@property (retain, nonatomic) PKSearchQuery *searchQuery;
@property (retain, nonatomic) PKAccountUser *accountUser;
@property (retain, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) CNContact *userContact;
@property (readonly, nonatomic) NSString *userDisplayName;
@property (nonatomic) unsigned long long transactionCount;
@property (retain, nonatomic) PKCurrencyAmount *totalAmount;
@property (retain, nonatomic) NSArray *transactions;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *transactionTypes;
@property (nonatomic) unsigned long long secondaryType;
@property (nonatomic) unsigned long long secondaryGroupCount;
@property (readonly, nonatomic) NSString *identifier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)transactionForCashbackGroupWithSourceIdentifier:(id)a0;

@end
