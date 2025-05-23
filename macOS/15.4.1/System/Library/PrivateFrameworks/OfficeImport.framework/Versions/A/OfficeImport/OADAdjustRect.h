@interface OADAdjustRect : NSObject {
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mLeft;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mTop;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mRight;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mBottom;
}

- (id)description;
- (struct OADAdjustCoord { BOOL x0; int x1; })top;
- (struct OADAdjustCoord { BOOL x0; int x1; })bottom;
- (struct OADAdjustCoord { BOOL x0; int x1; })left;
- (struct OADAdjustCoord { BOOL x0; int x1; })right;
- (id)initWithLeft:(struct OADAdjustCoord { BOOL x0; int x1; })a0 top:(struct OADAdjustCoord { BOOL x0; int x1; })a1 right:(struct OADAdjustCoord { BOOL x0; int x1; })a2 bottom:(struct OADAdjustCoord { BOOL x0; int x1; })a3;

@end
