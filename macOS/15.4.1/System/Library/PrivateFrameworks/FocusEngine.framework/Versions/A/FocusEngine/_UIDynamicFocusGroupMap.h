@class _FEFocusGroupMap;

@interface _UIDynamicFocusGroupMap : NSObject {
    _FEFocusGroupMap *_impl;
}

- (id)init;
- (void).cxx_destruct;
- (id)focusGroupIdentifierForItem:(id)a0;
- (id)initWithBackingFocusGroupMap:(id)a0;
- (id)initWithCoordinateSpace:(id)a0;

@end
