@class ABACAccount, NSString, NSNumber;
@protocol ABACAccountStore;

@interface ABAccountComponents : NSObject

@property (readonly) ABACAccount *account;
@property (readonly) ABACAccount *parentAccount;
@property (readonly) NSString *identifier;
@property (readonly) NSString *path;
@property (readonly) id<ABACAccountStore> store;
@property (readonly) NSNumber *dsid;
@property (readonly) NSString *altDSID;

+ (id)componentsWithIdentifier:(id)a0;
+ (id)componentsWithIdentifier:(id)a0 path:(id)a1 account:(id)a2 parentAccount:(id)a3 store:(id)a4;
+ (id)componentsWithIdentifier:(id)a0 path:(id)a1 account:(id)a2 store:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 path:(id)a1 account:(id)a2 parentAccount:(id)a3 store:(id)a4;

@end
