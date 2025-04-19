@class TSCEError, TSCENumberValue, NSDate;

@interface TSCESumAccumulator : NSObject {
    TSCEError *_error;
}

@property (nonatomic) NSDate *dateAccumulator;
@property (nonatomic) double secondsToAdd;
@property (nonatomic) BOOL mixedDurationsAndNumbers;
@property (nonatomic) BOOL foundANumber;
@property (readonly, nonatomic) TSCENumberValue *numberAccumulator;

- (id)init;
- (void).cxx_destruct;
- (void)addValue:(id)a0 evaluationContext:(id)a1 functionSpec:(id)a2;
- (id)resultForFunction:(id)a0;

@end
