@class TSCENumberValue, TSCEValue, TSULocale, TSCEDateValue;

@interface TSTAccumulator : NSObject <NSCopying> {
    TSCEValue *_minValue;
    TSCEValue *_maxValue;
    TSCENumberValue *_productValue;
    TSCENumberValue *_numberTotalValue;
    TSCEDateValue *_firstDateSeen;
    double _totalSecsSinceReferenceDate;
    double _secondsToAdd;
}

@property (readonly, nonatomic) unsigned long long countA;
@property (readonly, nonatomic) unsigned long long countOfNumberDateDurationOrBool;
@property (readonly, nonatomic) unsigned long long countRows;
@property (readonly, nonatomic) unsigned int boolCount;
@property (readonly, nonatomic) unsigned int boolTrueCount;
@property (readonly, nonatomic) unsigned int numberCount;
@property (readonly, nonatomic) unsigned int dateCount;
@property (readonly, nonatomic) unsigned int durationCount;
@property (readonly, nonatomic) unsigned int stringCount;
@property (readonly, nonatomic) unsigned int errorCount;
@property (readonly, nonatomic) unsigned int noContentCount;
@property (readonly, nonatomic) TSCEValue *totalValue;
@property (readonly, nonatomic) TSCEValue *countAValue;
@property (readonly, nonatomic) TSCEValue *avgAValue;
@property (readonly, nonatomic) TSCEValue *minValue;
@property (readonly, nonatomic) TSCEValue *maxValue;
@property (readonly, nonatomic) TSCEValue *productValue;
@property (readonly, nonatomic) TSCEValue *countValue;
@property (readonly, nonatomic) TSCEValue *avgValue;
@property (readonly, nonatomic) TSCEValue *countRowsValue;
@property (readonly, nonatomic) TSCEValue *rangeValue;
@property (retain, nonatomic) TSULocale *locale;
@property (nonatomic) BOOL isCircularReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)clear;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (void)accumulate:(id)a0;
- (void)accumulateValue:(id)a0;
- (id)countBlankValue;
- (id)p_averageValueWithA:(BOOL)a0;
- (id)valueForType:(unsigned char)a0;

@end
