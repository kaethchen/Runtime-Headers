@class NSString, NSArray, NSData, NSDictionary, NSMorphologyCustomPronoun;

@interface _NSAttributedStringGrammarInflection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *userInflection;
@property (class, setter=_setThirdPartyApplicationsCanAccessUserInflection:) BOOL _thirdPartyApplicationsCanAccessUserInflection;
@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *_currentGlobalUserInflection;
@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *_currentGlobalUserInflectionIfAvailable;
@property (class, readonly) NSString *_protectedPreferencesDomain;
@property (class, readonly) NSString *_thirdPartyPreferencesDomain;
@property (class, readonly) BOOL _isSimulatingLockedDevice;
@property (class, readonly) BOOL _isSimulatingThirdPartyProcess;
@property (class, readonly) NSArray *presetInflections;
@property (class, readonly) BOOL canSelectCustomInflection;
@property (class, readonly) BOOL canSelectUserInflection;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *externalRepresentation;
@property (readonly) NSDictionary *externalRepresentationDictionary;
@property (readonly) NSString *localizedShortDescription;
@property long long context;
@property long long gender;
@property long long grammaticalCase;
@property long long determinationType;
@property long long number;
@property long long person;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (copy, nonatomic) NSMorphologyCustomPronoun *englishCustomPronoun;

+ (void)_addGlobalUserInflectionObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
+ (BOOL)_canSelectUserInflectionWithPreferredLanguages:(id)a0;
+ (void)_removeGlobalUserInflectionObserver:(id)a0 context:(void *)a1;
+ (void)_usePreferencesDomainForFirstParty:(id)a0 thirdParty:(id)a1 simulateLockedDevice:(BOOL)a2 simulateThirdPartyProcess:(BOOL)a3 withinBlock:(id /* block */)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGender:(long long)a0;
- (id)_initWithMarkdownDictionary:(id)a0;
- (id)_markupDictionary;
- (void)_setAsGlobalUserInflection;
- (void)_useInsteadOfUserInflectionInBlock:(id /* block */)a0;
- (id)initWithExternalRepresentation:(id)a0 error:(id *)a1;
- (id)initWithExternalRepresentationDictionary:(id)a0 error:(id *)a1;
- (id)initWithInflectionRule:(id)a0;
- (id)initWithMorphology:(id)a0;

@end
