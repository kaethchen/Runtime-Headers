@class FBKBugForm, NSOrderedSet, NSString, NSArray, NSNumber;

@interface FBKQuestionGroup : FBKManagedFeedbackObject <FBKDiffableObject>

@property (retain, nonatomic) NSOrderedSet *primitiveQuestions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *sortOrder;
@property (retain, nonatomic) NSArray *questions;
@property (retain, nonatomic) FBKBugForm *bugForm;

+ (id)entityName;
+ (id)uniquingKey;

- (id)description;
- (BOOL)isFileCollectionGroup;
- (id)questionWithRole:(id)a0;
- (id)diffableHashWithContext:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
