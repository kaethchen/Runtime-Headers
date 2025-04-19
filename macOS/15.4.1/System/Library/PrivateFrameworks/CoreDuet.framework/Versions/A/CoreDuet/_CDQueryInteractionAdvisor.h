@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)adviseInteractionsForKeywordsInString:(id)a0 usingSettings:(id)a1;

@end
