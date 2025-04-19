@class CKVLocalization;

@interface CKVTaskSettings : NSObject {
    _Atomic BOOL _evaluationEnabled;
    _Atomic BOOL _evaluationWithProfileEnabled;
}

@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (id)buildVersion;
+ (id)projectNameAndSourceVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalization:(id)a0;
- (BOOL)isEvaluationEnabled;
- (BOOL)isEvaluationWithProfile;
- (BOOL)isTaskCoalescenceDisabled;
- (BOOL)isTaskEnabled:(unsigned short)a0 reason:(unsigned short)a1;
- (void)refreshLocalization;
- (void)setEvaluationEnabled:(BOOL)a0;
- (void)setEvaluationWithProfile:(BOOL)a0;
- (void)setTaskCoalescenceDisabled:(BOOL)a0;

@end
