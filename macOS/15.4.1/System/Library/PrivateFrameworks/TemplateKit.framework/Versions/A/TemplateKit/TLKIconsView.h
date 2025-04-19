@class NSMutableArray, NSFont;

@interface TLKIconsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) NSFont *symbolFont;

- (id)init;
- (void).cxx_destruct;
- (void)updateIcons:(id)a0;

@end
