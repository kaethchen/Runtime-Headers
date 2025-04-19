@class NSArray, NSEnumerator;

@interface _PASLowValueCardinalityMutableDictionaryEnumerator : NSEnumerator {
    NSArray *_objectsAndKeys;
    unsigned long long _i;
    NSEnumerator *_keyEnumerator;
}

- (id)init;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;

@end
