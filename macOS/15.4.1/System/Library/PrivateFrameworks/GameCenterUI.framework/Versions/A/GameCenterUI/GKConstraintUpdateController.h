@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject

@property (retain, nonatomic) NSPointerArray *constraintsToUpdate;

+ (id)sharedController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)registerConstraint:(id)a0 leading:(double)a1 forFontTextStyle:(id)a2;
- (void)updateConstraint:(id)a0;

@end
