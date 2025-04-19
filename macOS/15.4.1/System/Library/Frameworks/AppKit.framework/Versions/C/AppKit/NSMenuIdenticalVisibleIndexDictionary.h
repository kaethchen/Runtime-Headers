@class NSArray;

@interface NSMenuIdenticalVisibleIndexDictionary : NSObject

@property (nonatomic, readonly) NSArray *arrangedMenuIndexes;

- (id)init;
- (long long)menuIndexForVisibleIndex:(long long)a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;

@end
