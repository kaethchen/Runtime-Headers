@class VFXCoreEntityHandle;

@interface VFXParticleEmitter : NSObject <NSCopying, NSSecureCoding> {
    VFXCoreEntityHandle *_coreHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)particleEmitterWithEntityObject:(id)a0;
+ (id)presentationParticleEmitterWithCoreEntityHandleRef:(struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTag:(id)a0;
- (id)tag;
- (void)restart;
- (id)world;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (BOOL)isPausedOrPausedByInheritance;
- (void)killParticles;
- (id)coreEntityHandle;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *)coreEntityHandleRef;
- (id)initWithCoreEntityHandle:(id)a0;
- (id)initWithEntityObject:(id)a0;
- (void)wasAddedToWorld:(id)a0;
- (void)willBeRemovedFromWorld:(id)a0;
- (struct __CFXWorld { } *)worldRef;

@end
