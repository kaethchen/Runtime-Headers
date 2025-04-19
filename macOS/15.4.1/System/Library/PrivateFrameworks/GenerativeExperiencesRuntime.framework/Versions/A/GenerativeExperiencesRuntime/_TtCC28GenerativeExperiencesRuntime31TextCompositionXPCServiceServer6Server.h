@interface _TtCC28GenerativeExperiencesRuntime31TextCompositionXPCServiceServer6Server : NSObject <TextCompositionXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ eventReporter;
    void /* unknown type, empty encoding */ asyncQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestEmojiSmartRepliesWithMessageID:(id)a0 messageText:(id)a1 options:(id)a2 with:(id /* block */)a3;
- (void)cancelWithToken:(long long)a0;
- (void)describeWithResult:(id)a0 index:(long long)a1 string:(id)a2 options:(id)a3 with:(id /* block */)a4;
- (void)prewarmSmartRepliesWithDocumentType:(id)a0;
- (void)prewarmSmartRepliesWithDocumentType:(id)a0 options:(id)a1;
- (void)prewarmWithFeature:(id)a0 options:(id)a1;
- (void)prewarmWithInput:(id)a0 rewritingTypes:(id)a1;
- (void)prewarmWithRewritingTypes:(id)a0;
- (void)requestBasicLongFormRepliesAndQuestionnaireWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 options:(id)a3 with:(id /* block */)a4;
- (void)requestCalendarEventFromOCRInput:(id)a0 inputOptions:(id)a1 with:(id /* block */)a2;
- (void)requestCalendarEventFromOCRInput:(id)a0 with:(id /* block */)a1;
- (void)requestEmojiSmartRepliesWithInputContextHistory:(id)a0 tapbackMessageGUIDs:(id)a1 documentType:(id)a2 options:(id)a3 with:(id /* block */)a4;
- (void)requestLongFormSmartRepliesWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 baseResponse:(id)a3 userFilledQuestionnaire:(id)a4 options:(id)a5 with:(id /* block */)a6;
- (void)requestLongFormSmartRepliesWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 options:(id)a3 with:(id /* block */)a4;
- (void)requestLongFormSmartRepliesWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 userFilledQuestionnaire:(id)a3 options:(id)a4 with:(id /* block */)a5;
- (void)requestShortFormSmartRepliesWithInputContextHistory:(id)a0 documentType:(id)a1 options:(id)a2 with:(id /* block */)a3;
- (void)requestUserQuestionnaireWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 baseResponse:(id)a3 options:(id)a4 with:(id /* block */)a5;
- (void)requestUserQuestionnaireWithInputContextHistory:(id)a0 documentType:(id)a1 replyType:(id)a2 options:(id)a3 with:(id /* block */)a4;
- (void)reviewWithInput:(id)a0 with:(id /* block */)a1;
- (void)reviewWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 with:(id /* block */)a3;
- (void)rewriteWithInput:(id)a0 rewritingType:(id)a1 with:(id /* block */)a2;
- (void)rewriteWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rewritingType:(id)a2 options:(id)a3 with:(id /* block */)a4;

@end
