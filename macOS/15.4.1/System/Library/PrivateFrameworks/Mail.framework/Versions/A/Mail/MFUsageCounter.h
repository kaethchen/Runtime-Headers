@class NSMutableDictionary, NSCalendar, NSDate;

@interface MFUsageCounter : NSObject {
    NSMutableDictionary *_counts;
    BOOL _isDirty;
}

@property (readonly, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly, nonatomic) NSDate *referenceDate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (BOOL)gatherJunkMailUsageCounts;
+ (void)setGatherJunkMailUsageCounts:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countForKey:(id)a0;
- (void)saveDefaults;
- (void)incrementCountForKey:(id)a0;
- (id)_dictionaryForKey:(id)a0 createIfNeeded:(BOOL)a1;
- (unsigned long long)countForKey:(id)a0 includeToday:(BOOL)a1;
- (void)incrementCountForKey:(id)a0 byCount:(unsigned long long)a1;
- (long long)numberOfDaysAvailableForKey:(id)a0;
- (void)removeCountForKey:(id)a0;

@end
