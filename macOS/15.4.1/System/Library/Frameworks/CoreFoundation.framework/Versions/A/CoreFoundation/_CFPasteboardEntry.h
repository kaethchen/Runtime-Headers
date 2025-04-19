@class NSObject;
@protocol OS_xpc_object, OS_dispatch_group;

@interface _CFPasteboardEntry : NSObject {
    struct __CFData { } *_data;
    NSObject<OS_xpc_object> *_xpcData;
    id /* block */ _localPromisor;
    id /* block */ _remotePromisor;
    _Atomic unsigned char _localPromiseState;
    _Atomic unsigned char _remotePromiseState;
    NSObject<OS_dispatch_group> *_promiseGroup;
    NSObject<OS_xpc_object> *_promisorConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) struct __CFString { } *flavorName;
@property (readonly) int itemIdentifier;
@property (readonly) struct __CFUUID { } *promiseUUID;
@property (readonly) unsigned char hasData;
@property (readonly) unsigned char hasLocalPromise;
@property (readonly) unsigned char promisorExistsInCurrentProcess;
@property unsigned long long dataFlags;
@property (getter=isHidden) unsigned char hidden;
@property unsigned char isPendingFlush;
@property unsigned char didLeakExtension;

- (void)dealloc;
- (id)description;
- (id /* block */)requestDataForPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFArray *x3; struct os_unfair_lock_s { unsigned int x0; } x4; struct __CFUUID *x5; struct __CFArray *x6; unsigned char x7; id x8; id x9; _Atomic unsigned long long x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; struct __CFData *x15; struct __CFDictionary *x16; id /* block */ x17; id /* block */ x18; id /* block */ x19; id /* block */ x20; double x21; struct { unsigned int x0[8]; } x22; } *)a0 generation:(long long)a1 immediatelyAvailableResult:(struct { int x0; long long x1; struct __CFData *x2; unsigned long long x3; } *)a2;
- (id)_createXPCData;
- (void)_setLocalPromiseState:(unsigned char)a0;
- (void)_setRemotePromiseState:(unsigned char)a0;
- (struct __CFData { } *)createDataAndReturnError:(int *)a0;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)a0;
- (id)initFromXPCObject:(id)a0 fromConnection:(id)a1;
- (id)initWithFlavorName:(struct __CFString { } *)a0 itemIdentifier:(int)a1;
- (void)promiseDataWithBlock:(id /* block */)a0 forPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFArray *x3; struct os_unfair_lock_s { unsigned int x0; } x4; struct __CFUUID *x5; struct __CFArray *x6; unsigned char x7; id x8; id x9; _Atomic unsigned long long x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; struct __CFData *x15; struct __CFDictionary *x16; id /* block */ x17; id /* block */ x18; id /* block */ x19; id /* block */ x20; double x21; struct { unsigned int x0[8]; } x22; } *)a1 generation:(long long)a2;
- (void)promiseDataWithFetchOperation:(id)a0;
- (void)resolvePromisedDataWithCompletionQueue:(id)a0 isLocalPromise:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setData:(struct __CFData { } *)a0;

@end
