@class GCPhysicalInputElementCollection;

@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection *_collection;
    unsigned long long _currentIndex;
}

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;

@end
