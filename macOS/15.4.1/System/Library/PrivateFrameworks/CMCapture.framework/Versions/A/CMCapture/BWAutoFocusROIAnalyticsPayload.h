@class NSString, NSDictionary;

@interface BWAutoFocusROIAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) int focusRegionType;
@property (retain, nonatomic) NSDictionary *focusRegion;
@property (nonatomic) int luxLevel;
@property (nonatomic) float subjectDistance;
@property (copy, nonatomic) NSString *clientApplicationID;
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
