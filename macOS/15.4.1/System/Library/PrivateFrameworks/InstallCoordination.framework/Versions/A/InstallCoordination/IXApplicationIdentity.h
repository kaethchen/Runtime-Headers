@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)canonicalSerializationForPlistKey;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initWithPlistKeySerialization:(id)a0;
- (id)possibleSerializationsForPlistKey;
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)a0;
- (BOOL)resolvePersonaWithError:(id *)a0;

@end
