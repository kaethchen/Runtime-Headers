@class PSGStructuredInfoSuggestion, PSGTextualResponseSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion;
@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predictedValue;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithTextualResponseSuggestion:(id)a0 structuredInfoSuggestion:(id)a1;

@end
