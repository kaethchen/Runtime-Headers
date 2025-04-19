@class NSConstantArray;

@interface __NSConstantArrayEnumerator : NSEnumerator {
    NSConstantArray *_underlyingArray;
    unsigned long long _index;
}

- (id)allObjects;
- (id)initWithConstantArray:(id)a0;
- (id)nextObject;

@end
