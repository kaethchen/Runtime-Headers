@interface SCNNodeManipulableItem : SCNManipulableItem

+ (void)addItems:(id)a0 toScene:(id)a1;
+ (id)nodeManipulatorItemWithNode:(id)a0 screenSize:(double)a1;
+ (void)removeItemsFromScene:(id)a0;

- (struct SCNVector3 { double x0; double x1; double x2; })scale;
- (void)setPosition:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform;
- (id)parentItem;
- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setWorldTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })worldTransform;
- (id)cloneForManipulators;
- (BOOL)isNodeManipulator;
- (void)validateClone;

@end
