@class NSArray;

@interface BRShareLookupParticipantsOperation : BRShareOperation {
    NSArray *_userIdentities;
}

@property (copy) id /* block */ lookupParticipantsCompletionBlock;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithUserIdentities:(id)a0;

@end
