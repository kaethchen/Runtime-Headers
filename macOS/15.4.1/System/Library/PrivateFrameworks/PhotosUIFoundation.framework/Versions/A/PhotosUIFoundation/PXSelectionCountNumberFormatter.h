@class NSNumberFormatter;

@interface PXSelectionCountNumberFormatter : NSNumberFormatter

@property (readonly, nonatomic) NSNumberFormatter *decimalNumberFormatter;
@property (nonatomic) long long selectionNumberLimit;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;

@end
