@class NSSet, NSMutableSet;

@interface CNSuggestedSaveRequest : CNSaveRequest

@property (retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *mutableRejectedSuggestions;
@property (readonly, copy) NSSet *confirmedSuggestions;
@property (readonly, copy) NSSet *rejectedSuggestions;

- (void).cxx_destruct;
- (id)storeIdentifier;
- (void)confirmSuggestion:(id)a0;
- (void)rejectSuggestion:(id)a0;

@end
