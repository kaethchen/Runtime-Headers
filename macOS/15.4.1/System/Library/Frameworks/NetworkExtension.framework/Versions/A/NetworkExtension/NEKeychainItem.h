@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSData *_data;
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    BOOL _legacy;
    NEKeychainItem *_oldItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long domain;
@property (copy) NSString *identifier;
@property (copy) NSString *password;
@property (copy) NSData *data;
@property (copy) NSData *persistentReference;
@property (copy) NSData *keyPersistentReference;
@property (readonly) BOOL isModernSystem;
@property (copy) NSString *accessGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)remove;
- (id)copyData;
- (BOOL)aclContainsPaths:(id)a0;
- (void)addAppPathsToACL:(id)a0;
- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithData:(id)a0 domain:(long long)a1;
- (id)initWithData:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPassword:(id)a0 domain:(long long)a1;
- (id)initWithPassword:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPersistentReference:(id)a0 keyReference:(id)a1 isModernSystem:(BOOL)a2 domain:(long long)a3 accessGroup:(id)a4;
- (void)migrateFromPreferences:(struct __SCPreferences { } *)a0;
- (void)syncUsingConfiguration:(id)a0 accountName:(id)a1 passwordType:(long long)a2 identifierSuffix:(id)a3;

@end
