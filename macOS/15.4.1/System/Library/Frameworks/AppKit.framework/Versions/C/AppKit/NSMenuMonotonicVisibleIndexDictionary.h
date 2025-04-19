@class NSArray, NSString;

@interface NSMenuMonotonicVisibleIndexDictionary : NSObject {
    void /* unknown type, empty encoding */ visibleIndexToMenuIndex;
    void /* unknown type, empty encoding */ numberOfVisibleItems;
    void /* unknown type, empty encoding */ menuIndexes;
    void /* unknown type, empty encoding */ _menuIndexesBeforeUpdate;
    void /* unknown type, empty encoding */ groupingCount;
    void /* unknown type, empty encoding */ hasPendingUpdates;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSArray *arrangedMenuIndexes;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)appendMenuIndex:(long long)a0;
- (void)beginUpdates;
- (void)endUpdates;
- (long long)hideAtMenuIndex:(long long)a0;
- (long long)insertAtMenuIndex:(long long)a0 hidden:(BOOL)a1;
- (long long)menuIndexForVisibleIndex:(long long)a0;
- (long long)removeAtMenuIndex:(long long)a0;
- (long long)unhideAtMenuIndex:(long long)a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;

@end
