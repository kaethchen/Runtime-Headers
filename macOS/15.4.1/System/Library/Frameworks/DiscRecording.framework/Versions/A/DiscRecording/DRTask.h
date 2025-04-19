@interface DRTask : NSObject {
    void *_ref;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (unsigned long long)_cfTypeID;
- (id)info;
- (struct DRTaskObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; int x8; unsigned int x9; struct __CFDictionary *x10; struct __CFSet *x11; } *)_obj;
- (id)initWithPid:(int)a0 forTask:(unsigned int)a1;

@end
