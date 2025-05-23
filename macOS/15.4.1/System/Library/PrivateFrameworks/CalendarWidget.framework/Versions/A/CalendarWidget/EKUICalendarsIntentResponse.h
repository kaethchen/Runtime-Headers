@class NSArray;

@interface EKUICalendarsIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *calendars;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
