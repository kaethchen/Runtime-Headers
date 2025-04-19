@class NSObject;
@protocol OS_dispatch_queue;

@interface _MDLabelRegistry : NSObject {
    long long _generation;
    struct __CFDictionary { } *_labelsByID;
    struct __CFDictionary { } *_labelsByUUID;
    struct __CFDictionary { } *_labelKinds;
    struct __CFNotificationCenter { } *_localCenter;
    NSObject<OS_dispatch_queue> *_localQueue;
}

- (void)dealloc;
- (id)init;
- (BOOL)synchronize;
- (struct __CFArray { } *)copyLabelKinds;
- (struct __CFArray { } *)copyLabelsWithKind:(struct __CFString { } *)a0;
- (void)enumerateLabelsMatchingExpression:(struct __CFString { } *)a0 usingBlock:(id /* block */)a1;
- (void)internLabel:(id)a0;
- (id)labelWithID:(struct __CFString { } *)a0;
- (id)labelWithName:(struct __CFString { } *)a0 kind:(struct __CFString { } *)a1;
- (id)labelWithUUID:(struct __CFUUID { } *)a0;
- (void)postNotification:(struct __CFString { } *)a0 forLabel:(id)a1;
- (void)processLabelData:(struct __CFData { } *)a0 usingBlock:(id /* block */)a1;
- (void)removeLabel:(id)a0;
- (id)syncWithLabelData:(struct __CFData { } *)a0 isFullSync:(BOOL)a1;

@end
