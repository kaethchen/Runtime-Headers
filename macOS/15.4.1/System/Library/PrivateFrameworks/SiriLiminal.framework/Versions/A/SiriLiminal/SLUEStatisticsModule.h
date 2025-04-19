@class MLModel, NSString, NSDictionary;

@interface SLUEStatisticsModule : NSObject

@property (retain, nonatomic) MLModel *uesModel;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSString *outputNodeName;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSDictionary *outputSpecs;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (id)getEncodedValue:(id)a0;
- (id)processInputFeatures:(id)a0;

@end
