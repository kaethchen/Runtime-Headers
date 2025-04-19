@class NSString;

@interface WRDiagnostic : NSObject <WRDictEncoding, NSCopying>

@property (readonly) NSString *name;
@property (readonly) double triggerThresholdDurationSingle;
@property (readonly) BOOL hasTriggerThresholdDurationSingle;
@property (readonly) BOOL triggerEventTimeout;
@property (readonly) double triggerThresholdDurationSum;
@property (readonly) BOOL hasTriggerThresholdDurationSum;
@property (readonly) double triggerThresholdDurationUnion;
@property (readonly) BOOL hasTriggerThresholdDurationUnion;
@property (readonly) unsigned int triggerThresholdCount;
@property (readonly) BOOL hasTriggerThresholdCount;
@property (readonly) BOOL gatherTailspin;
@property (readonly) BOOL tailspinIncludeOSLogs;
@property (readonly) BOOL reportSpindumpForThisThread;
@property (readonly) NSString *reportSpindumpForThreadWithName;
@property (readonly) BOOL reportSpindumpForMainThread;
@property (readonly) BOOL reportSpindumpForThisDispatchQueue;
@property (readonly) NSString *reportSpindumpForDispatchQueueWithLabel;
@property (readonly) NSString *reportOtherSignpostWithName;
@property (readonly) NSString *reportProcessesWithName;
@property (readonly) BOOL reportOmittingNetworkBoundIntervals;
@property (readonly) BOOL hasAnySpindumpReports;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodedDict;
- (id)initWithEncodedDict:(id)a0 error:(id *)a1;

@end
