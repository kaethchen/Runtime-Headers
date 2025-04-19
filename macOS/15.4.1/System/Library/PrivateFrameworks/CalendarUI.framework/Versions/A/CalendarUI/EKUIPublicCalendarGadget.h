@class NSButton, NSView;

@interface EKUIPublicCalendarGadget : EKUISingleViewGadget

@property (retain) NSButton *publicCalendarCheckbox;
@property (retain) NSView *publicLinkDescriptionContainer;

- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)publicURLBoxClicked:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
