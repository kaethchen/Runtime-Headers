@class NSPopUpButton;

@interface QCMultiplexerUI : QCInspector {
    NSPopUpButton *classMenu;
}

+ (id)viewNibName;

- (void)setClass:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
