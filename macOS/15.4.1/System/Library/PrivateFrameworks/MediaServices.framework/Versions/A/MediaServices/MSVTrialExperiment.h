@class NSString;

@interface MSVTrialExperiment : NSObject

@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *deploymentID;

- (id)description;
- (void)invalidate;
- (void)refresh;
- (id)metadataForFactor:(id)a0;
- (id)stringForFactor:(id)a0;
- (BOOL)boolForFactor:(id)a0;
- (double)doubleForFactor:(id)a0;
- (id)initWithProjectID:(long long)a0 namespaceName:(id)a1;
- (long long)longForFactor:(id)a0;

@end
