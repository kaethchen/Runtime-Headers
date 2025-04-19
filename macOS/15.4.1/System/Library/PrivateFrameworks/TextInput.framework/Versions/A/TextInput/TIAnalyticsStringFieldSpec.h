@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) NSArray *allowedValues;

- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 allowedValues:(id)a1;

@end
