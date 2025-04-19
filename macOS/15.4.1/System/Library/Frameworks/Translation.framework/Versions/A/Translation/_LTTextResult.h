@class _LTLocalePair, NSString, NSLocale;

@interface _LTTextResult : NSObject

@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, copy, nonatomic) NSLocale *sourceLocale;
@property (readonly, copy, nonatomic) NSLocale *targetLocale;
@property (readonly, copy, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalePair:(id)a0 sourceText:(id)a1 targetText:(id)a2 clientIdentifier:(id)a3;

@end
