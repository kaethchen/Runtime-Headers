@interface PXCollectionSortOrderUtilities : NSObject

+ (long long)_sortOrderFromCollection:(id)a0 sortKey:(unsigned int)a1;
+ (long long)sortOrderFromCollection:(id)a0 isAscending:(out BOOL *)a1;
+ (BOOL)supportsFetchSortOrder:(long long)a0 inCollection:(id)a1;
+ (BOOL)userCanChangeSortOrderInCollection:(id)a0;

@end
