@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)count;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)elementForAlias:(id)a0;

@end
