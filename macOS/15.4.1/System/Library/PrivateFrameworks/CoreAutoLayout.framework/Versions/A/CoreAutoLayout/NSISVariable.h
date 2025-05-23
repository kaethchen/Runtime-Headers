@class NSArray, NSMapTable, NSISEngine;
@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject <NSCoding> {
    NSMapTable *_overflowEngines;
    NSISEngine *_engines[3];
    struct { unsigned int value; } _engineVarIndexes[3];
    unsigned int _ident;
}

@property id<NSISVariableDelegate> delegate;
@property (readonly) BOOL shouldBeMinimized;
@property (readonly) int valueRestriction;
@property (readonly) int orientationHint;
@property (readonly) NSArray *engines;

+ (id)variableWithDelegate:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(BOOL)a2;
+ (id)variableMarkingConstraint:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(BOOL)a2;
+ (id)variableWithName:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(BOOL)a2;
+ (id)variableWithName:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(BOOL)a2 valueIsUserObservable:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)descriptionInEngine:(id)a0;
- (id)markedConstraint;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (struct { unsigned int x0; })overflowEngineVarIndexForEngine:(id)a0;
- (BOOL)shouldBeIntegral;
- (BOOL)valueIsUserVisible;

@end
