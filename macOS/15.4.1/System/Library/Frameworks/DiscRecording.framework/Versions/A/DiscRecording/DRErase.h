@interface DRErase : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)eraseForDevice:(id)a0;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)_cfTypeID;
- (void)start;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)device;
- (id)status;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)properties;
- (void)setProperties:(id)a0;
- (int)_start;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (struct DREraserObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; struct DROpticalDevice *x8; struct DREraseStatus *x9; struct DRThreadObject *x10; struct __CFString *x11; BOOL x12; } *)_obj;
- (id)eraseType;
- (void)setEraseType:(id)a0;

@end
