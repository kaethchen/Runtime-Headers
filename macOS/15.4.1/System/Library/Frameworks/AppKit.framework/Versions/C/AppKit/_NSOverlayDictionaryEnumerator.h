@class NSArray;

@interface _NSOverlayDictionaryEnumerator : NSEnumerator {
    NSArray *_keys;
    long long _i;
}

- (void)dealloc;
- (id)allObjects;
- (id)nextObject;
- (id)initWithBaseKeys:(id)a0 overlayKeys:(id)a1;

@end
