@class NSView, NSString;

@interface SearchUISnippetUIButtonViewContext : NSObject <SearchUIButtonItemGeneratorViewDelegate>

@property (weak, nonatomic) NSView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)deviceIsAuthenticated;
- (id)viewForButtonItem:(id)a0;

@end
