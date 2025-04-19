@class NSString, NSNumber, NSArray;

@interface DGiOSEditsOperation : DGOperation

@property (readonly) NSString *editSummary;
@property (copy) NSNumber *inputStrength;
@property (copy) NSNumber *inputWarmth;
@property (copy) NSNumber *inputOrigI;
@property (copy) NSNumber *inputOrigQ;
@property (copy) NSNumber *inputShadows;
@property (copy) NSNumber *inputHighlights;
@property (copy) NSNumber *inputVibrancy;
@property (copy) NSArray *inputCurvePoints;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (BOOL)allowDough;

@end
