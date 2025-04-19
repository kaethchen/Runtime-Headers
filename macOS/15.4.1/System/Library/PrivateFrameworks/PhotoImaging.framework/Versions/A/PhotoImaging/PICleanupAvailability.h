@interface PICleanupAvailability : NSObject

@property (class, readonly, nonatomic) long long status;

+ (void)updateAvailability;
+ (BOOL)_deviceSupportsCleanup;
+ (id)_fetchCleanupAvailability;
+ (id)ensureAvailability:(BOOL)a0;

@end
