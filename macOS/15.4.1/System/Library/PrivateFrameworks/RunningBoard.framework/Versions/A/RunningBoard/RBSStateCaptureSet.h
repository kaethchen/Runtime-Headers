@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSet : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_stateCaptureSegments;
}

@property (readonly, copy, nonatomic) NSSet *itemsCopy;

- (id)init;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;

@end
