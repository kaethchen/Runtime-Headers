@class NSString;

@interface TextInputUI.TUISmartReplyResponse : NSObject {
    void /* unknown type, empty encoding */ threadIdentifier;
    void /* unknown type, empty encoding */ modelInfoString;
    void /* unknown type, empty encoding */ userFeedbackInputString;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ srResponse;
@property (nonatomic, retain) void /* unknown type, empty encoding */ error;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) void /* unknown type, empty encoding */ contentWarning;
@property (nonatomic, copy) NSString *modelInfoString;
@property (nonatomic, copy) NSString *userFeedbackInputString;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseFromCache;
@property (nonatomic, retain) void /* unknown type, empty encoding */ modelPromptTokenCount;
@property (nonatomic, retain) void /* unknown type, empty encoding */ modelOutputTokenCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSrResponse:(id)a0 threadIdentifier:(id)a1 type:(long long)a2 contentWarning:(long long)a3 error:(id)a4 modelInfoString:(id)a5 userFeedbackInputString:(id)a6 responseFromCache:(id)a7 modelPromptTokenCount:(id)a8 modelOutputTokenCount:(id)a9;
- (void)printValues;

@end
