@class NSUserDefaults, NSMutableDictionary;
@protocol NAScheduler;

@interface MTUserDefaults : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *observers;

+ (id)sharedUserDefaults;
+ (id)_distributedNotificationForLocalNotification:(id)a0;
+ (id)_localNotificationForDistributedNotification:(id)a0;

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)_postNotification:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (long long)integerForKey:(id)a0 defaultValue:(long long)a1;
- (void)setTimeInterval:(double)a0 forKey:(id)a1;
- (double)timeIntervalForKey:(id)a0 defaultValue:(double)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 notification:(id)a2;
- (void)_cleanupObserversForNotification:(id)a0;
- (BOOL)boolForKey:(id)a0 exists:(BOOL *)a1;
- (void)distributedNotificationPosted:(id)a0;
- (float)floatForKey:(id)a0 exists:(BOOL *)a1;
- (long long)integerForKey:(id)a0 exists:(BOOL *)a1;
- (long long)integerForKey:(id)a0 isValid:(id /* block */)a1 defaultValue:(long long)a2;
- (id)objectForKey:(id)a0 defaultValue:(id)a1;
- (void)registerNotification:(id)a0 observer:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 notification:(id)a2;
- (void)setFloat:(float)a0 forKey:(id)a1 notification:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1 notification:(id)a2;
- (void)setTimeInterval:(double)a0 forKey:(id)a1 notification:(id)a2;
- (double)timeIntervalForKey:(id)a0 exists:(BOOL *)a1;
- (double)timeIntervalForKey:(id)a0 isValid:(id /* block */)a1 defaultValue:(double)a2;
- (void)unregisterNotification:(id)a0 observer:(id)a1;

@end
