@class NSMutableDictionary, UINSTouchAccommodationVisualizer, NSObject, NSMutableArray;
@protocol OS_dispatch_source;

@interface UINSVirtualDigitizer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _spinLock;
    NSObject<OS_dispatch_source> *_dispatchSource;
    BOOL _dispatchIsActive;
    NSMutableArray *_indexPool;
    NSMutableDictionary *_fingers;
}

@property unsigned int contextId;
@property (weak) UINSTouchAccommodationVisualizer *touchVisualizer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_postHIDDigitizerCollectionToUIKitWithTimestamp:(unsigned long long)a0;
- (void)_scanFingers;
- (void)_upateOverlayOnMainThread;
- (void)addVirtualFingerAtLoc:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (BOOL)cancelEverything;
- (void)modifyVirtualFingerForKey:(id)a0 withBlock:(id /* block */)a1;

@end
