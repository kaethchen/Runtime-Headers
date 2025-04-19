@class NSString;

@interface DTTimer : NSObject {
    void /* unknown type, empty encoding */ _mtAlarmID;
    void /* unknown type, empty encoding */ _mtTimerID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ mtAlarm;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ mtTimer;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *mtAlarmID;
@property (nonatomic, readonly) NSString *mtTimerID;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMTAlarm:(id)a0;
- (id)initWithMTTimer:(id)a0;
- (id)initWithMTAlarmID:(id)a0;
- (id)initWithMTTimerID:(id)a0;

@end
