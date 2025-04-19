@class NSArray;

@interface NSCGSDisplayConfiguration : NSObject {
    unsigned long long _reconfigureSeed;
    unsigned long long _acceleratorSeed;
}

@property (class, readonly) BOOL displaysWillChange;

@property (readonly) double flipOffset;
@property (readonly, copy) NSArray *uniqueDisplays;
@property (readonly) unsigned int changeSeed;

+ (void)addChangeObserver:(id /* block */)a0;
+ (id)_uniqueDisplaysAppendingDisplayIDs:(id)a0;
+ (id)currentConfiguration;
+ (void)updateAndNotifyIfNeeded;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_validateChanges:(unsigned long long)a0 fromDisplayConfiguration:(id)a1;
- (id)initWithUniqueDisplays:(id)a0 changeSeed:(unsigned int)a1 flipOffset:(double)a2 reconfigureSeed:(unsigned long long)a3 acceleratorSeed:(unsigned long long)a4;
- (BOOL)isEqualToDisplayConfiguration:(id)a0;

@end
