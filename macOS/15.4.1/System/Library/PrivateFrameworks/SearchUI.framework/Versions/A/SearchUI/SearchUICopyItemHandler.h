@interface SearchUICopyItemHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)defaultTitle;
- (id)defaultSymbolName;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)supportsCopy;

@end
