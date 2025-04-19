@class NSString, NSArray;

@interface _MLTTestInput : NSObject <_MLTInputProvider>

@property (readonly, nonatomic) BOOL dataAvailable;
@property (copy, nonatomic) NSString *inputDataKey;
@property (copy, nonatomic) NSString *vecDataKey;
@property (copy, nonatomic) NSString *otherFrameWorkPredictionKey;
@property (copy, nonatomic) NSString *testCaseNameKey;
@property (copy, nonatomic) NSArray *outputTestData;
@property (retain, nonatomic) NSArray *testData;
@property (nonatomic) unsigned long long currentSet;

+ (id)inputWithTestData:(id)a0;

- (void).cxx_destruct;
- (id)initWithTestData:(id)a0;
- (id)nextDataSet:(id *)a0;

@end
