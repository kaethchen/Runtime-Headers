@interface PKSavingsAccountAssessmentManager : NSObject {
    long long _type;
}

- (long long)type;
- (id)initWithType:(long long)a0;
- (void)provideSessionFeedbackDiscarded;
- (void)provideSessionFeedbackIngested;
- (void)updateAssessmentType:(long long)a0;
- (void)waitForAssessmentWithCompletion:(id /* block */)a0;

@end
