@class NSMutableArray, SCRCUserDefaults;

@interface SCRSearchHistory : NSObject

@property (retain, nonatomic) NSMutableArray *_history;
@property (nonatomic) unsigned long long _capacity;
@property (readonly, nonatomic) BOOL _syncWithUserDefaults;
@property (readonly, weak, nonatomic) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeEntryAtIndex:(unsigned long long)a0;
- (id)entryAtIndex:(unsigned long long)a0;
- (id)initWithUserDefaults:(id)a0;
- (void)removeEntry:(id)a0;
- (id)_removeEntriesMatchingText:(id)a0;
- (void)_saveToUserDefaults;
- (unsigned long long)_updatedIndexAfterRemovingMatchingText:(id)a0 originalIndex:(unsigned long long)a1;
- (void)updateEntry:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)updateEntryInPlace:(id)a0 atIndex:(unsigned long long)a1;

@end
