@class NSArray;

@interface ICScannerFeatureEnumerationProps : NSObject

@property (nonatomic) unsigned long long indexOfCurrentValue;
@property (nonatomic) unsigned long long indexOfDefaultValue;
@property (weak, nonatomic) id currentValue;
@property (weak, nonatomic) id defaultValue;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *menuItemLabels;
@property (retain, nonatomic) NSArray *menuItemLabelsTooltips;

- (void).cxx_destruct;
- (id)getValidatedValue:(id)a0;

@end
