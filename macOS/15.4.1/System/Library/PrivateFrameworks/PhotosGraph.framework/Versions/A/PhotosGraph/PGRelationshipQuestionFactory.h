@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory

+ (id)displayStringForRelationshipLabel:(id)a0;
+ (id)initialQuestionRelationshipLabelByRelationship;
+ (id)localFactoryScoreByRelationshipLabels;
+ (id)relationshipLabelsRequiringInitialQuestion;
+ (unsigned long long)relationshipTagForRelatationshipType:(unsigned long long)a0;
+ (id)relationshipTypesByRelationshipLabel;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initialQuestionForRelationshipLabel:(id)a0;
- (void)updateInitialQuestion:(id)a0;
- (void)updateOutdatedAnsweredYesChildRelationshipQuestionsIfNeeded;

@end
