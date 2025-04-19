@interface ADMSystemClock : NSObject

+ (id)sharedSystemClock;

- (void)setTimeZone:(id)a0;
- (void)setTime:(long long)a0;

@end
