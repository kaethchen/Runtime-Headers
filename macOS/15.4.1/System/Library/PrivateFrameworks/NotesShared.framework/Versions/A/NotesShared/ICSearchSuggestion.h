@class NSArray, CSSuggestion, NSString, ICSearchToken;

@interface ICSearchSuggestion : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *orderedDefaultSearchSuggestions;

@property (retain, nonatomic) CSSuggestion *csSuggestion;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *suggestionItemTitle;
@property (readonly, nonatomic) ICSearchToken *token;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) NSString *iconImageName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithSuggestion:(id)a0;

@end
