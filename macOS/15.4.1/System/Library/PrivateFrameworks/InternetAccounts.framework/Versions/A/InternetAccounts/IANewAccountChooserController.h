@class NSView, NSString, NSArray, IANewAccountChooserRadioCollection, NSTableRowView, NSMutableDictionary, NSMutableArray, NSTableView;
@protocol IANewAccountChooserControllerDelegateProtocol;

@interface IANewAccountChooserController : NSObject {
    NSMutableArray *_items;
    NSMutableDictionary *_visiblePlugins;
    NSArray *_services;
    NSArray *_topLevelObjects;
    NSView *_tableStyleView;
    NSTableRowView *_otherTableRowView;
}

@property (retain) NSString *otherRowLabel;
@property (readonly) NSView *view;
@property (readonly) NSTableView *table;
@property (readonly) IANewAccountChooserRadioCollection *radioCollection;
@property (weak) id<IANewAccountChooserControllerDelegateProtocol> delegate;
@property BOOL showHelp;
@property BOOL showOther;
@property BOOL variableHeight;
@property unsigned long long style;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)deselectAll;
- (id)_buttonForCellView:(id)a0;
- (void)_prepItems;
- (id)_rowItemWithPlugin:(id)a0;
- (BOOL)_shouldShowPlugin:(id)a0;
- (void)buttonPress:(id)a0;
- (id)initWithServices:(id)a0;
- (id)selectedPluginID;

@end
