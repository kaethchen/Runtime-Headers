@class QCNumberPort;

@interface QCProjection : QCPatch {
    QCNumberPort *inputFieldOfView;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (BOOL)usesLocalContextForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
