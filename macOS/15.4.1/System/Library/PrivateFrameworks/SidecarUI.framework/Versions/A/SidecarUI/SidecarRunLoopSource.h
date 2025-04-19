@interface SidecarRunLoopSource : NSObject {
    struct __CFRunLoopSource { } *_source;
    struct __CFDictionary { } *_modes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)signal;
- (void)perform;
- (id)_description;
- (void)_scheduleWithRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (void)_unscheduleFromRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (void)scheduleWithRunLoop:(id)a0 inMode:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 inMode:(id)a1;

@end
