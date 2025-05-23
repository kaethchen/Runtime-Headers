@class NSString, NSURL, NSArray;

@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int reportFrequencyRandomValue;
@property (readonly, nonatomic) NSString *headerValueForTriggers;
@property (copy, nonatomic) id /* block */ testBehavior_reportMetric;
@property (copy, nonatomic) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (copy, nonatomic) NSString *clientProcessVersion;
@property (copy, nonatomic) NSString *clientProcessBundleId;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSString *databaseScope;
@property (nonatomic) BOOL anonymous;
@property (copy, nonatomic) NSString *containerScopedUserIdentifier;
@property (copy, nonatomic) NSString *containerScopedDeviceIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSArray *operationGroups;
@property (copy, nonatomic) NSArray *clientOperations;
@property (nonatomic) BOOL pushTrigger;
@property (copy, nonatomic) id /* block */ didCompleteWithError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)clientOperationTriggered:(id)a0;
- (id)generateCloudKitInfo;
- (int)generateTriggerWithResponseHeader:(unsigned char)a0;
- (BOOL)operationGroupTriggered:(id)a0;
- (void)rollReportFrequencyRandomValue;

@end
