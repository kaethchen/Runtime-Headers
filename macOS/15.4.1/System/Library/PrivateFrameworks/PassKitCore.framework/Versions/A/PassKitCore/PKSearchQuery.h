@class NSString, NSArray;

@interface PKSearchQuery : NSObject <NSSecureCoding> {
    unsigned long long _domain;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) unsigned long long domain;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *tokens;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tags;
- (id)_groupTokenOfType:(unsigned long long)a0;
- (id)accountUserToken;
- (id)amountTokens;
- (id)categoryToken;
- (id)dateToken;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1;
- (id)locationTokens;
- (id)merchantToken;
- (id)peerPaymentSubTypeToken;
- (id)peerPaymentToken;
- (id)rewardsToken;
- (id)transactionSources;
- (id)transactionStatuses;
- (id)transactionTypes;

@end
