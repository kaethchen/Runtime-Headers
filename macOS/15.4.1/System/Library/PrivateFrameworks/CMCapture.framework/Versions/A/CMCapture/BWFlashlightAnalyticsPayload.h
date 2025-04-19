@class NSString;

@interface BWFlashlightAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    long long _levelUsage[11];
    long long _beamWidthUsage[11];
}

@property (nonatomic) int luxLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (id)eventName;
- (id)eventDictionary;
- (void)setBeamWidthUsage:(long long[11])a0;
- (void)setLevelUsage:(long long[11])a0;

@end
