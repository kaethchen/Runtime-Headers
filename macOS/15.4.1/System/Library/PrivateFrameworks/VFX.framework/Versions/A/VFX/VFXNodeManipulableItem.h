@interface VFXNodeManipulableItem : VFXManipulableItem {
    struct { void /* unknown type, empty encoding */ columns[4]; } _manipulableTransform;
}

+ (id)nodeManipulatorItemWithNode:(id)a0 screenSize:(float)a1;
+ (void)addItems:(id)a0 toWorld:(id)a1;
+ (void)removeItemsFromWorld:(id)a0;

- (void /* unknown type, empty encoding */)scale;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transform;
- (id)parentItem;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })worldTransform;
- (id)cloneForManipulators;
- (void)validateClone;
- (struct { void /* unknown type, empty encoding */ x0[4]; })draggedTransform;
- (void)initializeDraggedTransform;

@end
