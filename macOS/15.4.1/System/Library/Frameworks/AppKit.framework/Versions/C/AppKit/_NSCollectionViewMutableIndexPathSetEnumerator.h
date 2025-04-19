@class NSMutableIndexSet, NSIndexSet, _NSCollectionViewMutableIndexPathSet;

@interface _NSCollectionViewMutableIndexPathSetEnumerator : NSEnumerator {
    _NSCollectionViewMutableIndexPathSet *_indexPathSet;
    NSMutableIndexSet *_sectionIndexSet;
    NSIndexSet *_currentItemIndexSet;
    unsigned long long _currentSectionIndex;
    unsigned long long _lastItemIndexReturned;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithCollectionViewIndexPathSet:(id)a0;

@end
