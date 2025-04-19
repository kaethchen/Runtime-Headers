@class NSString, CRLanguageRecognitionContext, NLLanguageRecognizer;

@interface CRLanguageRecognitionSession : NSObject <CRTextDecodingLanguageRecognitionSession> {
    NLLanguageRecognizer *_languageRecognizer;
}

@property (retain, nonatomic) CRLanguageRecognitionContext *latinLanguageRecognitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
