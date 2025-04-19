@class NSString, NSSet;

@interface ACDMockManagedDataclass : ACDManagedDataclass {
    NSString *name;
    NSSet *provisionedAccounts;
    NSSet *syncableTypes;
    NSSet *supportedTypes;
    NSSet *enabledAccounts;
}

- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)enabledAccounts;
- (id)provisionedAccounts;
- (void)setEnabledAccounts:(id)a0;
- (void)setProvisionedAccounts:(id)a0;
- (void)setSupportedTypes:(id)a0;
- (void)setSyncableTypes:(id)a0;
- (id)supportedTypes;
- (id)syncableTypes;

@end
