@class NSString;

@interface BWReactionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (copy, nonatomic) NSString *reactionType;
@property (nonatomic) BOOL uiTriggeredReaction;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int continuityCameraClientDeviceClass;
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
