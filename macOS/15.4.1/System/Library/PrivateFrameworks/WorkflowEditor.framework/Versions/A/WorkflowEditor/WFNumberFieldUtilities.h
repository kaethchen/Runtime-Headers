@interface WFNumberFieldUtilities : NSObject

+ (id)decimalSymbol;
+ (id)negateText:(id)a0;
+ (unsigned long long)numberOfOccurrencesOfString:(id)a0 inString:(id)a1;
+ (BOOL)shouldChangeText:(id)a0 allowMinus:(BOOL)a1;
+ (id)stringBySanitizingNumberString:(id)a0 allowDecimalNumbers:(BOOL)a1;

@end
