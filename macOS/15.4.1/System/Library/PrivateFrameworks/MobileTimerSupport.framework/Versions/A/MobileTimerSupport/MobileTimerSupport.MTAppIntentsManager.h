@class _TtC18MobileTimerSupport19MTAppIntentsManager;

@interface MobileTimerSupport.MTAppIntentsManager : NSObject

@property (class, nonatomic, readonly) _TtC18MobileTimerSupport19MTAppIntentsManager *sharedManager;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didAddNewWorldClockWithName:(id)a0;
- (void)didRemoveWorldClockWithName:(id)a0;
- (void)didSelectTabWithTab:(long long)a0;

@end
