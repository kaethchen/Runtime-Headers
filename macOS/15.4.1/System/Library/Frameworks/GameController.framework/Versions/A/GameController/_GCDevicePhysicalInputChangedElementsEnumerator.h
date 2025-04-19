@class _GCDevicePhysicalInputTransaction;

@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator {
    _GCDevicePhysicalInputTransaction *_implementation;
    unsigned long long _currentIndex;
}

- (oneway void)release;
- (id)retain;
- (id)nextObject;

@end
