@class NSString, TIAutocorrectionList;

@interface TIKeyboardInteractionProtocolEventCandidatesOffered : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIAutocorrectionList *candidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (void)adjustSourceMaskForCandidate:(id)a0;
- (id)initWithCandidatesOffered:(id)a0 keyboardState:(id)a1;

@end
