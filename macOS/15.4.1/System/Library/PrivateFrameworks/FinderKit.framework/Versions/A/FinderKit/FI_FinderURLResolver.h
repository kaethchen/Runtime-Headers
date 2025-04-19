@class NSMutableDictionary, FI_TRunAfterHelper;

@interface FI_FinderURLResolver : NSObject {
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _lock;
    NSMutableDictionary *_resolvedURLMap;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _resolutionCompletedToken;
    BOOL _tornDown;
}

+ (void)tearDown;
+ (id)resolver;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)tearDown;
- (void)cancelResolutions;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForURL:(id)a0;
- (void)resolutionCompleted:(id)a0;
- (void)resolveURLAsync:(id)a0;

@end
