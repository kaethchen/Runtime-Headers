@interface PGStoryPromptSuggestionQuestionFactory : PGSurveyQuestionFactory

@property (nonatomic, readonly) unsigned short questionType;
@property (nonatomic, readonly) long long questionOptions;

- (id)init;
- (id)generateQuestionsWithLimit:(long long)a0 progressBlock:(id /* block */)a1;
- (id)initWithWorkingContext:(id)a0 questionVersion:(short)a1;

@end
