@class NSOrderedSet;

@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) BOOL hasExited;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(BOOL)a3;
- (BOOL)isEqualToATXPOICategoryVisitDuetEvent:(id)a0;

@end
