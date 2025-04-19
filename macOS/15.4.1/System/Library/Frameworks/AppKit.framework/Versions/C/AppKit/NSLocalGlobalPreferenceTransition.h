@class NSArray;

@interface NSLocalGlobalPreferenceTransition : NSObject {
    unsigned long long _overlaySpaceID;
    NSArray *_overlays;
}

+ (id)localTransition;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)endTransitionWithoutPosting;
- (id)initLocalTransition;

@end
