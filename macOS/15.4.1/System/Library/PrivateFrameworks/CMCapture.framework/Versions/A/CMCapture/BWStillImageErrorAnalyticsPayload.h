@interface BWStillImageErrorAnalyticsPayload : BWStillImageAnalyticsPayloadCommon

@property (nonatomic) int error;
@property (nonatomic) float digitalZoomRatioFromSource;

- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
