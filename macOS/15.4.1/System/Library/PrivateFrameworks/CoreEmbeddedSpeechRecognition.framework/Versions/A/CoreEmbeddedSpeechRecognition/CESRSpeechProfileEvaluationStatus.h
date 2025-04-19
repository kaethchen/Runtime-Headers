@interface CESRSpeechProfileEvaluationStatus : NSObject {
    _Atomic BOOL _isEvaluationEnabled;
}

+ (id)sharedStatus;

- (BOOL)isEvaluationEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;

@end
