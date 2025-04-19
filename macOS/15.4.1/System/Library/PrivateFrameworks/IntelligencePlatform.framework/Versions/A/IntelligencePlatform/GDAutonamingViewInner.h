@interface GDAutonamingViewInner : NSObject {
    void /* unknown type, empty encoding */ subgraph;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ feedbackService;
    void /* unknown type, empty encoding */ isForLiveServing;
    void /* unknown type, empty encoding */ rejectedIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)confirmWithIdentifier:(id)a0 person:(id)a1 confirmationType:(long long)a2;
- (void)didUpdateUserFeedback;
- (id)initWithViewName:(id)a0 error:(id *)a1;
- (id)objCPersonFor:(id)a0;
- (void)rejectWithIdentifier:(id)a0 person:(id)a1 confirmationType:(long long)a2;

@end
