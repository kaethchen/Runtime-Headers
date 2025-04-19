@class NSString, NSDictionary, NSArray, ABACAccountType, NSNumber;

@interface ABACAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *accountDescription;
@property (readonly) ABACAccountType *accountType;
@property (readonly) ABACAccountType *parentAccountType;
@property (copy) NSDictionary *accountProperties;
@property (readonly, copy) NSNumber *dsid;
@property (readonly, copy) NSString *altDSID;
@property (readonly, copy) NSArray *childAccounts;
@property (readonly) BOOL requiresSeparateBirthdayCalendar;

+ (BOOL)_dataclassIsEnabled:(id)a0 forAccount:(id)a1;
+ (id)accountPropertiesFromACAccount:(id)a0;
+ (void)_setIsEnabled:(BOOL)a0 forDataclass:(id)a1 forAccount:(id)a2;
+ (id)altDSIDFromACAccount:(id)a0;
+ (id)childAccountsFromACAccount:(id)a0;
+ (BOOL)isAccountEnabled:(id)a0;
+ (void)setAccountPropertiesOnAccount:(id)a0 toDictionary:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithACAccount:(id)a0;
- (id)initWithIdentifier:(id)a0 accountDescription:(id)a1 accountType:(id)a2 parentAccountType:(id)a3 accountProperties:(id)a4 dsid:(id)a5 altDSID:(id)a6 childAccounts:(id)a7;

@end
