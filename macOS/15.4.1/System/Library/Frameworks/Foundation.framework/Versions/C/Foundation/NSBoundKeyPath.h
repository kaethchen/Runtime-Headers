@class NSString;

@interface NSBoundKeyPath : NSObject {
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)keyPathWithRootObject:(id)a0 path:(const char *)a1;
+ (id)newKeyPathWithRootObject:(id)a0 keyPathString:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (id)mutableSetValue;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (void)setValue:(id)a0;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;

@end
