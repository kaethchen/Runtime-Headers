@class NSArray, MARelation;

@interface PGGraphYearNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfYear;

@property (readonly, nonatomic) NSArray *years;

+ (unsigned long long)calendarUnit;
+ (id)yearNodesForYear:(long long)a0 inGraph:(id)a1;
+ (id)yearNodesLargerThanYear:(long long)a0 inGraph:(id)a1;

- (void)enumerateYearsUsingBlock:(id /* block */)a0;

@end
