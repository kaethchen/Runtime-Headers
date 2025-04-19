@class NSString, NSLayoutConstraint;

@interface NSConstraintLabel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (weak, nonatomic) NSLayoutConstraint *constraint;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL emphasize;

- (void).cxx_destruct;

@end
