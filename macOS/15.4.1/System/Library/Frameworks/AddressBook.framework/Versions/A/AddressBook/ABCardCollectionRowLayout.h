@interface ABCardCollectionRowLayout : NSObject

+ (id)constraintsWithMetrics:(id)a0 scope:(id)a1 forEditMode:(BOOL)a2 isTemplate:(BOOL)a3;
+ (id)glyphAlignmentForScope:(id)a0;
+ (double)labelColumnWidth;
+ (id)labelTopOffsetConstraintsForScope:(id)a0 editMode:(BOOL)a1;
+ (id)labelTrailingConstraintsForScope:(id)a0 editMode:(BOOL)a1 isTemplate:(BOOL)a2;
+ (id)messagingServiceLabelConstraintsForScope:(id)a0;
+ (id)minusButtonAlignmentConstraintsForScope:(id)a0;
+ (id)privacyCheckboxAlignmentForScope:(id)a0;
+ (id)rowWidthConstraintsForScope:(id)a0;
+ (id)stackViewConstraintsForScope:(id)a0;

@end
