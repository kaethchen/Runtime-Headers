@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject

@property (readonly, copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) NSString *currencyDisplayValue;
@property (nonatomic) BOOL usedMaximumSuggestion;

+ (id)suggestionWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
+ (id)suggestionWithValue:(id)a0 currencyCode:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
- (id)initWithValue:(id)a0 currencyCode:(id)a1;

@end
