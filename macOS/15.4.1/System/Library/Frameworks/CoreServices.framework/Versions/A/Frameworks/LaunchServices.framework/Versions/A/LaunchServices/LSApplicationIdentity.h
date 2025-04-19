@class NSString, LSMacApplicationIdentityBookmark;

@interface LSApplicationIdentity : LSBundleIdentity <RBSWrappedLSInfoProvider, NSSecureCoding, NSCopying> {
    LSMacApplicationIdentityBookmark *_identityBookmark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;

+ (id)bundleIdentifierForIdentityString:(id)a0 error:(id *)a1;
+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;
+ (id)enumeratorWithOptions:(unsigned long long)a0;
+ (id)identityStringsForApplicationWithBundleIdentifier:(id)a0 error:(id *)a1;
+ (BOOL)personaWithUniqueString:(id)a0 getPersonaType:(unsigned long long *)a1 error:(id *)a2;

- (id)fetchWrappedInfoWithError:(out id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)findApplicationRecordWithError:(id *)a0;
- (id)bundleIdentifier;
- (id)findApplicationRecordFetchingPlaceholder:(long long)a0 error:(id *)a1;
- (id)initForRecord:(id)a0 personaWithAttributes:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithBundleIdentifier:(id)a0 allowPlaceholder:(BOOL)a1 personaUniqueString:(id)a2 error:(id *)a3;
- (id)initWithIdentityBookmark:(id)a0 identityString:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithIdentityString:(id)a0;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;
- (BOOL)needsMigration;

@end
