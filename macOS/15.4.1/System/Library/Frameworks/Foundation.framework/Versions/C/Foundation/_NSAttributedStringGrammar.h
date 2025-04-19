@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly) _NSAttributedStringGrammar *identityGrammar;

@property long long aspect;
@property long long deictic;
@property long long determinationType;
@property long long gender;
@property long long grammaticalCase;
@property long long mood;
@property long long number;
@property long long person;
@property long long position;
@property long long tense;
@property long long verbForm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMarkdownDictionary:(id)a0;
- (id)initWithMorphology:(id)a0;

@end
