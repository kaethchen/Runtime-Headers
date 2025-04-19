@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeItem:(id)a0;
- (BOOL)containsItem:(id)a0;
- (id)_stateCapture;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;

@end
