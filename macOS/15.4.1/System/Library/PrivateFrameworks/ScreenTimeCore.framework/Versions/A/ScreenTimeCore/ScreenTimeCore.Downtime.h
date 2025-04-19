@class NSArray;

@interface ScreenTimeCore.Downtime : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ schedules;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ blockAtLimit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ scheduleEnabled;
@property (nonatomic, readonly) NSArray *schedules;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlockAtLimit:(BOOL)a0 scheduleEnabled:(BOOL)a1 schedules:(id)a2;
- (id)setWithBlockAtLimit:(BOOL)a0;
- (id)setWithSchedule:(id)a0;
- (id)setWithScheduleEnabled:(BOOL)a0;

@end
