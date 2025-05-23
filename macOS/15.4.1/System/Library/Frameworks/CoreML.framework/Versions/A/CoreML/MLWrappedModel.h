@class MLModel, NSString;

@interface MLWrappedModel : MLModel

@property (retain) MLModel *innerModel;
@property (retain, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (void)clearInnerModelWithReason:(id)a0;
- (id)initWithInnerModel:(id)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;

@end
