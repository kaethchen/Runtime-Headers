@class NSArray, NSString, NSMutableDictionary, VFXEntityObject;

@interface VFXCoreEntityHandle : NSObject <NSCopying, NSSecureCoding> {
    VFXEntityObject *_entityObject;
    struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *_handle;
    NSMutableDictionary *_bindings;
    NSString *_tag;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bindings;
@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) VFXEntityObject *entityObject;

+ (id)handleWithEntityObject:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTag:(id)a0;
- (id)initWithTag:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *)handle;
- (id)world;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (id)bindingPresentationValueForKey:(id)a0;
- (id)bindingValueForKey:(id)a0;
- (void)didSetEntityObject;
- (id)initWithEntityObject:(id)a0;
- (void)resolveTag:(id)a0 remap:(id)a1;
- (BOOL)setBindingValue:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorld:(id)a0;
- (void)willBeRemovedFromWorld:(id)a0;
- (struct __CFXWorld { } *)worldRef;

@end
