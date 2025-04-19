@class NSString, NSArray;

@interface NSTermOfAddress : NSObject <NSCopying, NSSecureCoding> {
    long long _gender;
    BOOL _addressesCurrentUser;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *languageIdentifier;
@property (readonly, copy) NSArray *pronouns;

+ (id)neutral;
+ (id)currentUser;
+ (id)feminine;
+ (id)localizedForLanguageIdentifier:(id)a0 withPronouns:(id)a1;
+ (id)masculine;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_containsPronoun:(id)a0 withGrammemes:(id)a1;
- (id)_initWithGender:(long long)a0 addressingUser:(BOOL)a1;
- (id)_initWithPronouns:(id)a0 forLanguage:(id)a1;
- (BOOL)_isSupportedInLanguage:(id)a0;
- (id)_morphologyForLanguage:(id)a0;
- (id)_withExtrapolatedPronouns;

@end
