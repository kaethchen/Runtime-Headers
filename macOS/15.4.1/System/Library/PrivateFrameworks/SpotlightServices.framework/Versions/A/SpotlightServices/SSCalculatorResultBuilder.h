@class NSString;

@interface SSCalculatorResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *input;
@property (retain, nonatomic) NSString *output;
@property (nonatomic) BOOL isCalculation;
@property (nonatomic) BOOL isCurrencyConversion;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)currencyConversionAttributionImageWithSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)openCalculationCommand;
- (id)buildBackgroundColor;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCompactCardSection;
- (id)buildInlineCardSections;
- (id)buildPreviewButtonItems;
- (id)buildResult;
- (id)formattedInput;

@end
