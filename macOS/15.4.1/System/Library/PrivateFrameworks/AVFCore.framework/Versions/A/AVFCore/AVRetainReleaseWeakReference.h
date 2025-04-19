@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithReferencedObject:(id)a0;
- (id)referencedObject;

@end
