@class NSArray, NSString;
@protocol SiriUIVoicePickerTableViewDelegate;

@interface SiriUIVoicePickerTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>

@property (weak, nonatomic) id<SiriUIVoicePickerTableViewDelegate> pickerDelegate;
@property (retain, nonatomic) NSArray *voices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)initCommon;
- (void)setSelectedVoice:(id)a0;

@end
