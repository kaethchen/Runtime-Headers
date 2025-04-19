@class NSTouchBar, NSButton, NSString;

@interface CalUIGadgetViewTouchBar : NSObject <NSTouchBarDelegate, NSTouchBarProvider>

@property (retain) NSTouchBar *touchBar;
@property (retain) NSButton *removeButton;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (copy, nonatomic) id /* block */ removeFieldBlock;
@property (retain) NSTouchBar *wrappedBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)updateTouchBar;
- (void)_updateTouchBarIdentifiers;
- (void)closeButtonSelected;
- (id)initWithWrappedBar:(id)a0 doneBlock:(id /* block */)a1 removeFieldBlock:(id /* block */)a2;
- (void)removeFieldSelected;

@end
