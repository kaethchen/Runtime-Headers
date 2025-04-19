@class NSNumber, NSString;

@interface CKStoreAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString *_clientIdentifier;
    long long _serverType;
    NSString *_token;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char kind;
@property (readonly) NSNumber *dsID;
@property (readonly) NSString *firstName;
@property (readonly) NSString *identifier;
@property (readonly) BOOL isSignedIn;
@property (readonly) BOOL isPrimary;
@property (readonly) BOOL isManagedStudent;
@property (readonly) NSString *lastName;
@property (readonly) NSString *credit;

+ (id)_acAccountFromStoreAccount:(id)a0 client:(id)a1;
+ (id)_storeAccountFromACAccount:(id)a0 client:(id)a1;
+ (id)_storeAccountFromLegacyStoreAccount:(id)a0 client:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_clientIdentifier;
- (id)_initWithStoreClient:(id)a0 plist:(id)a1;
- (id)_initWithStoreClient:(id)a0 response:(id)a1;
- (id)_legacyStoreAccount;
- (id)_plist;
- (long long)_serverType;
- (void)_setCredit:(id)a0;
- (void)_setToken:(id)a0;
- (id)_token;

@end
