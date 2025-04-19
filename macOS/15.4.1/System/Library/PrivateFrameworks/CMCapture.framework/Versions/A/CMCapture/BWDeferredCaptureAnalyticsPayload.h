@class NSString;

@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int error;
@property (nonatomic) int processingType;
@property (nonatomic) BOOL fileBacked;
@property (nonatomic) unsigned int commitDurationInMilliseconds;
@property (nonatomic) unsigned int flushDurationInMilliseconds;
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
