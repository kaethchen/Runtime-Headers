@class NSString;

@interface IAFeedbackServiceSwiftBridge : NSObject {
    void /* unknown type, empty encoding */ originalContent;
    void /* unknown type, empty encoding */ generatedContent;
    void /* unknown type, empty encoding */ modelInfo;
}

@property (nonatomic) void /* unknown type, empty encoding */ featureDomain;
@property (nonatomic) void /* unknown type, empty encoding */ action;
@property (nonatomic, copy) NSString *originalContent;
@property (nonatomic, copy) NSString *generatedContent;
@property (nonatomic, copy) NSString *modelInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeatureDomain:(long long)a0 action:(long long)a1 originalContent:(id)a2 generatedContent:(id)a3 modelInfo:(id)a4;
- (void)launchFeedbackWithCompletionHandler:(void (^)(void))a0;
- (void)reportPresentedWithCompletionHandler:(void (^)(void))a0;

@end
