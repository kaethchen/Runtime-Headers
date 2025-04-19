@class SiriSharedUIStandardScrollView, NSString, NSTextField, SRUIFLocalization, NSTableView, NSTableColumn, SiriSharedUIAlternateUserUtteranceCellView;
@protocol SiriSharedUIAlternateUserUtteranceViewDelegate, SiriSharedUIAlternateUserUtteranceViewDataSource;

@interface SiriSharedUIAlternateUserUtteranceView : SiriSharedUIStandardView <NSTableViewDelegate, NSTableViewDataSource> {
    NSTableView *_tableView;
    NSTableColumn *_tableColumn;
    double _tableColumnWidth;
    SiriSharedUIStandardScrollView *_scrollView;
    SiriSharedUIAlternateUserUtteranceCellView *_heightComputationCellView;
    NSTextField *_headerTextField;
    SRUIFLocalization *_localization;
}

@property (weak, nonatomic) id<SiriSharedUIAlternateUserUtteranceViewDataSource> dataSource;
@property (weak, nonatomic) id<SiriSharedUIAlternateUserUtteranceViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (long long)numberOfRowsInTableView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (double)heightForAllUtterancesForWidth:(double)a0;
- (double)heightForAttributedString:(id)a0 prefferedWidth:(double)a1;

@end
