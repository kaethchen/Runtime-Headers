@class NSString, NSArray, NSDictionary, NSTabView, NSTableView, IKInfoTabView, IKImageEditWorldMap;

@interface IKImageInfoView : IKImageEditView {
    NSTableView *_infoTable;
    NSTableView *_gpsTable;
    NSTabView *_contentTabView;
    IKInfoTabView *_infoTabView;
    IKImageEditWorldMap *_worldMap;
    NSDictionary *_metaData;
    NSDictionary *_processedMetaData;
    NSArray *_tabs;
    NSString *_selection;
    double _longitude;
    double _latitude;
}

+ (void)locateLongitude:(double)a0 latitude:(double)a1 query:(id)a2;
+ (void)locateLongitude:(double)a0 latitude:(double)a1;
+ (id)processMetaData:(id)a0;
+ (id)sharedImageEditView;

- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataSource:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tabs;
- (void)setTabs:(id)a0;
- (void)locate:(id)a0;
- (void)beautifyMetaData;
- (id)meta;
- (void)tabSelectionChanged:(id)a0;
- (void)updateTabs;
- (void)viewWillBecomeActive;
- (void)viewWillBecomeInActive;

@end
