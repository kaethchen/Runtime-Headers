@interface NSKeyedArchiverWrapper : NSKeyedArchiver {
    struct OpaqueHIArchiveRef { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; struct OpaqueHIObjectRef *x2; id x3; struct __CFDictionary *x4; struct __CFData *x5; long long x6; } *archive;
    int err;
}

@end
