@class _DPPrivacyBudget, NSString, NSDictionary, _DPValueRange, NSNumber;

@interface _DPKeyProperties : NSObject

@property (readonly, nonatomic) unsigned long long dataAlgorithm;
@property (readonly, nonatomic) unsigned long long privatizationAlgorithm;
@property (readonly, nonatomic) unsigned long long transport;
@property (readonly, nonatomic) NSString *huffmanTableClass;
@property (readonly, copy, nonatomic) NSString *propertiesName;
@property (readonly, nonatomic) _DPValueRange *possibleRange;
@property (readonly, nonatomic) NSNumber *acceptableError;
@property (readonly, nonatomic) _DPValueRange *trimmedScale;
@property (readonly, copy, nonatomic) NSString *noiseDistribution;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (readonly, nonatomic) NSNumber *privacyParameter;
@property (readonly, nonatomic) unsigned long long fragmentWidth;
@property (readonly, nonatomic) BOOL directUpload;
@property (readonly, nonatomic) BOOL bitStringAlgorithm;
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;
@property (readonly, nonatomic) unsigned long long submissionPriority;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) BOOL approvedForNonDNU;
@property (readonly, nonatomic) BOOL telemetryAllowed;
@property (readonly, nonatomic) unsigned long long transparencyLogLifetime;
@property (readonly, nonatomic) NSString *dataSource;

+ (void)initialize;
+ (id)keyPropertiesForName:(id)a0;
+ (id)keyPropertiesWithName:(id)a0 fromDictionary:(id)a1;
+ (id)parametersForAlgorithm:(id)a0 properties:(id)a1 epsilon:(id)a2 fragmentWidth:(unsigned long long)a3;
+ (id)privatizationAlgorithmStringFor:(unsigned long long)a0;
+ (id)propertiesFromFile:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPropertyName:(id)a0 dictionary:(id)a1;
- (id)privatizationAlgorithmString;

@end
