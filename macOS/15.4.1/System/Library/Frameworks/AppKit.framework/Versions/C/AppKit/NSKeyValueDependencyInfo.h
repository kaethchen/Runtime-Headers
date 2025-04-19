@class NSDictionary, NSKeyValueDependency, NSMutableDictionary;
@protocol NSDynamicPropertyContainer;

@interface NSKeyValueDependencyInfo : NSObject {
    struct __CFDictionary { } *_dependencyMap;
    struct NSDPClassInfo { struct NSDPClassInfo *x0; Class x1; unsigned long long x2; struct NSDPPropertyInfo *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; } *_classInfo;
    NSKeyValueDependency *_dependencyPrototype;
    unsigned char _attached : 1;
    id<NSDynamicPropertyContainer> _owner;
    NSMutableDictionary *_computedDependencyContexts;
}

@property (readonly) NSDictionary *dependencyMap;

- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_detach;
- (BOOL)hasDependent:(id)a0 forKey:(id)a1 currentlyValid:(BOOL *)a2;

@end
