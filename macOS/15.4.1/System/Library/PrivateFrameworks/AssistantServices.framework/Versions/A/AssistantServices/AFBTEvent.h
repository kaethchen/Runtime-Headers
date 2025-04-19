@class NSString, NSNumber;

@interface AFBTEvent : AFEvent

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *productID;
@property (nonatomic) BOOL hasProductID;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneCase;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneCase;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneRight;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneRight;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneLeft;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneLeft;
@property (readonly, nonatomic) BOOL appleAudioDevice;
@property (nonatomic) BOOL hasAppleAudioDevice;
@property (readonly, nonatomic) BOOL userWearing;
@property (nonatomic) BOOL hasUserWearing;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;

@end
