@class NSString, NSArray, SignpostSupportSubsystemCategoryAllowlist;

@interface WRWorkflow : NSObject <WRDictEncoding>

@property (readonly) NSString *name;
@property (readonly) NSArray *startSignposts;
@property (readonly) NSArray *endSignpostGroups;
@property (readonly) NSArray *allSignposts;
@property (readonly) NSArray *workflowDiagnostics;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowListForAllSignposts;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowListForDiagnostics;
@property (readonly) double maximumEventDuration;
@property (readonly) BOOL hasMaximumEventDuration;
@property (readonly) BOOL workflowSupportsConcurrentEvents;
@property (readonly) BOOL contextualTelemetryEnabled;
@property (readonly) NSString *contextualTelemetryRawValue;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;
@property (readonly) double overallDiagnosticThresholdIntervalSeconds;
@property (readonly) BOOL hasOverallDiagnosticThresholdInterval;

+ (id)workflowWithName:(id)a0;
+ (id)allWorkflows;
+ (id)makeOverridePlistDirectoryWithError:(id *)a0;
+ (id)overridePlistDirectory;
+ (id)workflowWithPlist:(id)a0 checkForOverrides:(BOOL)a1 error:(id *)a2;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)encodedDict;
- (BOOL)hasChangesRelativeTo:(id)a0;
- (id)initWithEncodedDict:(id)a0 error:(id *)a1;

@end
