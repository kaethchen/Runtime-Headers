@class NSSet, PKAccountUser, NSDictionary;

@interface PKAccountUserCollection : NSObject <NSSecureCoding> {
    NSDictionary *_accountUsersByAltDSID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *accountUsers;
@property (readonly, nonatomic) PKAccountUser *currentAccountUser;
@property (readonly, nonatomic) PKAccountUser *coOwnerAccountUser;
@property (readonly, nonatomic, getter=isCoOwner) BOOL coOwner;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToAccountUserCollection:(id)a0;
- (void)_updateWithAccountUsers:(id)a0;
- (id)accountUserForTransaction:(id)a0;
- (id)accountUserWithAltDSID:(id)a0;
- (id)accountUsersExcludingCurrentAccountUser;
- (id)activeAccountUsers;
- (id)activeAccountUsersExcludingCurrentAccountUser;
- (id)initWithAccountUsers:(id)a0;
- (id)transactionSourceIdentifiers;

@end
