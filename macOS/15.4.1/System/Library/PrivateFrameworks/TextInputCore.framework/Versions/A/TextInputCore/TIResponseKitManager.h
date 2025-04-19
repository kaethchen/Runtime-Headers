@class NSString;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)sharedTIResponseKitManager;

- (id)init;
- (void)generateResponseKitSuggestionsForString:(id)a0 withLanguage:(id)a1 withClientID:(id)a2 withRecipientID:(id)a3 withAdditionalPredictions:(id)a4 desiredCandidateCount:(unsigned long long)a5 shouldDisableAutoCaps:(BOOL)a6 stringIsBlocklisted:(BOOL)a7 async:(BOOL)a8 completionHandler:(id /* block */)a9;
- (void)persistResponseKitDynamicDataToDisk;
- (void)registerResponseKitResponse:(id)a0 forMessage:(id)a1 withLanguage:(id)a2 withClientID:(id)a3 withSenderID:(id)a4 withRecipientID:(id)a5 withTimestamp:(id)a6 shouldUpdateConversationHistory:(BOOL)a7;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(id)a0 withSenderID:(id)a1 withTimestamp:(id)a2;

@end
