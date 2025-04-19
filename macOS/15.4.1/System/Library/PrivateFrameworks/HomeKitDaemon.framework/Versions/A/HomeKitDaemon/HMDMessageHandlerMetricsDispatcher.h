@class NSUUID;
@protocol HMMLogEventSubmitting;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)privateDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (void)submitFailureEventOfType:(unsigned long long)a0 message:(id)a1;

@end
