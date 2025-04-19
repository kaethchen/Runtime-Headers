@interface TSURetainedPointerSet : TSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;

@end
