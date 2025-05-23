@class SFCredentialProviderExtensionState, NSString, NSDate;

@interface SFCredentialIdentity : NSObject <SFSafariPasswordCredential, NSCopying, NSSecureCoding> {
    NSString *_domainWithoutWWWDot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFCredentialProviderExtensionState *owningExtensionState;
@property (nonatomic) long long rowIdentifier;
@property (readonly, nonatomic) long long serviceIdentifierType;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *externalRecordIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_domainWithoutWWWDot;
- (long long)compareForQuickTypeBar:(id)a0;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5 owningExtensionState:(id)a6;
- (id)initWithServiceIdentifier:(id)a0 serviceIdentifierType:(long long)a1 externalRecordIdentifier:(id)a2 user:(id)a3 rank:(long long)a4;

@end
