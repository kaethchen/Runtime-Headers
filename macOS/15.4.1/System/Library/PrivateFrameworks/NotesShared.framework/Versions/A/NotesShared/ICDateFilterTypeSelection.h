@class NSDateFormatter, NSString, NSDictionary, NSDate, NSNumber;

@interface ICDateFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (class, readonly, nonatomic) NSDateFormatter *shortDateFormatter;

@property (nonatomic) unsigned long long selectionType;
@property (retain, nonatomic) NSDate *primaryDate;
@property (retain, nonatomic) NSDate *secondaryDate;
@property (retain, nonatomic) NSNumber *relativeRangeAmount;
@property (nonatomic) unsigned long long relativeRangeSelectionType;
@property (readonly, nonatomic) double relativeRangeTimeInterval;
@property (readonly, nonatomic) NSString *primaryDateSummary;
@property (readonly, nonatomic) NSString *secondaryDateSummary;
@property (readonly, nonatomic) NSString *relativeRangeDateSummary;
@property (readonly, nonatomic) NSString *relativeRangeLabel;
@property (readonly, nonatomic) NSString *relativeRangeAmountAndTimeInterval;
@property (readonly, nonatomic) NSDictionary *relativeRangeTimeIntervalOptions;

+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)relativeRangeStringComponentsForSelectionType:(unsigned long long)a0 number:(id)a1;
+ (id)relativeRangeSummaryForSelectionType:(unsigned long long)a0 amount:(unsigned long long)a1;
+ (id)relativeRangeSummaryForSelectionType:(unsigned long long)a0 number:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (long long)filterType;
- (id)relativeRangeTimeIntervalString;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToDateFilterSelection:(id)a0;
- (id)rawFilterValue;
- (id)relativeDateSummary;
- (id)relativeRangeAmountString;
- (void)setRelativeRangeTimeInterval:(double)a0;
- (void)setSpecificDateRangeFrom:(id)a0 to:(id)a1;
- (void)updateDatesForCurrentSelectionType;

@end
