@class ABCDCustomProperty, NSString;

@interface ABCDCustomPropertyValue : ABCDOwnedObject

@property (retain, nonatomic) ABCDCustomProperty *customProperty;
@property (retain, nonatomic) NSString *stringValue;

- (void)setDateValue:(id)a0;
- (long long)dateValueYear;
- (double)dateValueYearless;
- (void)setDateValueYear:(id)a0;
- (void)setDateValueYearless:(id)a0;

@end
