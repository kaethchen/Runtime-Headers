@class SearchUICommandHandler;

@interface SearchUIShareItemHandler : SearchUICommandHandler

@property (retain) SearchUICommandHandler *handlerForSharing;

- (void).cxx_destruct;
- (unsigned long long)destination;
- (id)defaultTitle;
- (id)defaultSymbolName;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)prefersModalPresentation;
- (BOOL)presentShareViewControllerForItem:(id)a0;

@end
