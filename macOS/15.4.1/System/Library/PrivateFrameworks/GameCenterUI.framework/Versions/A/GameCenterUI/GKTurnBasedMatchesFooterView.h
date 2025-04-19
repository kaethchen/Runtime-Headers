@class NSButton;

@interface GKTurnBasedMatchesFooterView : NSView

@property NSButton *doneButton;
@property NSButton *gameButton;

+ (id)footerView;

- (void)doneButtonPressed:(id)a0;
- (void)gameButtonPressed:(id)a0;

@end
