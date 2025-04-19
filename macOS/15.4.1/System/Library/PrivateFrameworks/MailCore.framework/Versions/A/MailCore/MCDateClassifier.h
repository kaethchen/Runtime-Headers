@interface MCDateClassifier : NSObject

+ (void)initialize;
+ (BOOL)isToday:(id)a0;
+ (BOOL)isYesterday:(id)a0;
+ (void)_dateInvalidated:(id)a0;
+ (void)_resetDates;

@end
