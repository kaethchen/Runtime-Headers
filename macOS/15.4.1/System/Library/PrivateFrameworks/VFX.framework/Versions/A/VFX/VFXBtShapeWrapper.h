@interface VFXBtShapeWrapper : NSObject {
    struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *_collisionShape;
}

- (void)dealloc;
- (id)initWithShape:(struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)a0;
- (struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)btShape;

@end
