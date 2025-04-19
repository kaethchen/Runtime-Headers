@class NSLayoutConstraint;

@interface SHKAutoLayoutConstraintPair : NSObject

@property (readonly) NSLayoutConstraint *firstConstraint;
@property (readonly) NSLayoutConstraint *secondConstraint;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithFirstConstraint:(id)a0 secondConstraint:(id)a1;

@end
