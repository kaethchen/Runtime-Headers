@class NSArray, NSMutableArray;

@interface IMPeople : NSObject

@property (retain, nonatomic) NSMutableArray *people;
@property (nonatomic) long long coalesceCount;
@property (readonly, nonatomic) NSArray *groups;
@property (nonatomic, setter=setShouldHidePeople:) BOOL hidePeople;
@property (readonly, nonatomic) BOOL coalescingChanges;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)removeIMHandle:(id)a0;
- (void)_addedPeople:(id)a0;
- (BOOL)addIMHandle:(id)a0;
- (void)addNotificationObserver:(id)a0 selector:(SEL)a1;
- (BOOL)addPeopleFromArray:(id)a0;
- (BOOL)addPeopleFromArray:(id)a0 skipMe:(BOOL)a1;
- (void)addedIMHandle:(id)a0;
- (void)beginCoalescedChanges;
- (BOOL)containsIMHandle:(id)a0;
- (void)endCoalescedChanges;
- (void)imHandle:(id)a0 buddyStatusChanged:(BOOL)a1;
- (void)removeNotificationObserver:(id)a0;
- (BOOL)removePeopleFromArray:(id)a0;
- (void)removedIMHandle:(id)a0;

@end
