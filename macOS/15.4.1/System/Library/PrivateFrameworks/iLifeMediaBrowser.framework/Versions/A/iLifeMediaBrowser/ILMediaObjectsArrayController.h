@class NSString, NSMutableArray;

@interface ILMediaObjectsArrayController : NSArrayController {
    unsigned long long _currentMediaType;
    NSMutableArray *_searchAttributeKeys;
    NSString *_searchString;
    id _filterDelegate;
}

- (void)dealloc;
- (id)init;
- (id)arrangeObjects:(id)a0;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (id)filterDelegate;
- (void)setFilterDelegate:(id)a0;
- (void)search:(id)a0;
- (BOOL)checkKeywords:(id)a0 withString:(id)a1;
- (id)searchAttributeKeys;
- (void)setSearchAttributeKeys:(id)a0;
- (id)stripAccentsFromString:(id)a0;

@end
