@interface CNIntegerFormatter : NSNumberFormatter

+ (id)portNumberFormatter;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (BOOL)_isPartialStringValid:(id)a0;

@end
