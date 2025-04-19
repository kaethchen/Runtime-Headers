@class NSPredicate;

@interface PXSModule : PXSItem

@property (copy, nonatomic) NSPredicate *condition;

+ (id)moduleWithTitle:(id)a0 contents:(id)a1;
+ (id)sectionWithRows:(id)a0;
+ (id)sectionWithRows:(id)a0 title:(id)a1;
+ (id)moduleWithSettings:(id)a0 moduleController:(id)a1;

- (id)condition:(id)a0;
- (id)conditionFormat:(id)a0;
- (id)valueViewReuseIdentifier;

@end
