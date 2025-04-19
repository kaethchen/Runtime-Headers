@class SGTSearchField, NSString;

@interface SGTSearchFieldDebugController : NSWindowController <NSWindowDelegate, NSTableViewDelegate>

@property (retain) SGTSearchField *field;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showWindow:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (id)windowFrameAutosaveName;
- (BOOL)windowShouldClose:(id)a0;
- (id)initWithSearchField:(id)a0;

@end
