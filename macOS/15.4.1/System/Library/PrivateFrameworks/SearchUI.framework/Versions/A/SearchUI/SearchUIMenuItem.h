@class SearchUICommandHandler, SFCommandButtonItem;

@interface SearchUIMenuItem : NSMenuItem

@property (retain, nonatomic) SearchUICommandHandler *commandHandler;
@property (retain, nonatomic) SFCommandButtonItem *commandButtonItem;

- (void).cxx_destruct;
- (void)performNSMenuCommandButtonItem:(id)a0;
- (id)initWithHandler:(id)a0 title:(id)a1 keyEquivalent:(id)a2 commandButtonItem:(id)a3;

@end
