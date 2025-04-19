@interface PGAgeCategoryQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (BOOL)_shouldAddNewAgeCategoryQuestionForPersonUUID:(id)a0;
- (id)_sortedAgeCategories;

@end
