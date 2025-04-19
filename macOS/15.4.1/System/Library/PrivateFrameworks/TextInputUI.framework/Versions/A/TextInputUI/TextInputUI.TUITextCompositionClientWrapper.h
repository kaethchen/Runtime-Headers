@interface TextInputUI.TUITextCompositionClientWrapper : NSObject {
    void /* unknown type, empty encoding */ internalTextCompositionClient;
}

+ (BOOL)isGMAvailableForMailReply;
+ (BOOL)isGMAvailableForMailReplyLongFormBasic;
+ (BOOL)isGMAvailableForMessagesReply;
+ (BOOL)isGMAvailableWithUseCase:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithToken:(unsigned long long)a0 forClient:(id)a1;
- (unsigned long long)generateRequestToken;
- (void)requestSmartRepliesWithInputContextHistory:(id)a0 shortForm:(BOOL)a1 clientID:(id)a2 threadIdentifier:(id)a3 candidateString:(id)a4 options:(id)a5 conversationType:(long long)a6 completion:(id /* block */)a7;

@end
