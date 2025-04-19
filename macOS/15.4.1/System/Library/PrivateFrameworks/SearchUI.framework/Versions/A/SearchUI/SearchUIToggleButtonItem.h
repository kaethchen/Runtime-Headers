@class SFButtonItem;
@protocol SearchUIToggleButtonItemProtocol;

@interface SearchUIToggleButtonItem : SearchUIButtonItem

@property (retain, nonatomic) SFButtonItem<SearchUIToggleButtonItemProtocol> *sfButtonItem;

- (id)offStateImage;
- (id)onStateImage;
- (void)buttonPressed;
- (id)toggledTitle;
- (id)untoggledTitle;
- (BOOL)allowsContextMenu;
- (id)offStateTitle;
- (id)onStateTitle;

@end
