@class NSString;

@interface FeedbackService.FBKSInteraction : NSObject {
    void /* unknown type, empty encoding */ featureDomain;
    void /* unknown type, empty encoding */ _bundleID;
    void /* unknown type, empty encoding */ prefillQuestions;
    void /* unknown type, empty encoding */ originalAnnotatedContent;
    void /* unknown type, empty encoding */ generatedAnnotatedContent;
    void /* unknown type, empty encoding */ extraContent;
    void /* unknown type, empty encoding */ originalContent;
    void /* unknown type, empty encoding */ generatedContent;
    void /* unknown type, empty encoding */ modelVersion;
    void /* unknown type, empty encoding */ diagnostics;
    void /* unknown type, empty encoding */ auxiliaryMetrics;
    void /* unknown type, empty encoding */ isHighPriority;
    void /* unknown type, empty encoding */ _evaluationID;
    void /* unknown type, empty encoding */ sentPresented;
    void /* unknown type, empty encoding */ firstEvaluation;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
