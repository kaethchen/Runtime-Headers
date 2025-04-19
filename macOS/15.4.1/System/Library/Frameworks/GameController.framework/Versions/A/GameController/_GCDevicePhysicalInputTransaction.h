@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_physicalInput;
    double _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (void)dealloc;
- (BOOL)allowsWeakReference;
- (id)description;
- (BOOL)isSnapshot;
- (double)lastEventTimestamp;
- (id)physicalInput;

@end
