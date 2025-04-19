@class NSString;

@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int error;
@property (copy, nonatomic) NSString *processingResult;
@property (nonatomic) int processingType;
@property (nonatomic) BOOL fileBacked;
@property (nonatomic) unsigned int containerAgeInSeconds;
@property (nonatomic) unsigned long long containerSizeInBytes;
@property (nonatomic) BOOL interactiveQoS;
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds;
@property (nonatomic) unsigned int jobDurationInMilliseconds;
@property (nonatomic) int containerProcessingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
