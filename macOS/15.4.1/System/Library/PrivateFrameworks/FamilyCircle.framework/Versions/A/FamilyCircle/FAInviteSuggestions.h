@class NSArray, NSString, FAFamilySuggesterFeedbackContext;

@interface FAInviteSuggestions : NSObject <FAInviteSuggesterProtocol>

@property (retain, nonatomic) NSArray *suggesters;
@property (retain, nonatomic) FAFamilySuggesterFeedbackContext *feedbackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fetchFamilyMemberSuggestions:(long long *)a0;
- (id)fetchFamilyMemberSuggestions:(long long *)a0 useSuggester:(id)a1;
- (long long)fetchSuggestedInviteTransportForContactId:(id)a0 contactHandles:(id)a1;
- (id)initForOneTapInvite;
- (id)initWithSuggesters:(id)a0;
- (id)recommendedSuggester:(id)a0;

@end
