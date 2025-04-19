@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithObject:(id)a0 collection:(id)a1;
- (id)nextObject;

@end
