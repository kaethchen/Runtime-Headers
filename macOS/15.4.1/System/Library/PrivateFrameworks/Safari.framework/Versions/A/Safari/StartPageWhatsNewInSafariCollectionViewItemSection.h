@class NSGridCell, NSImageView, NSTextField;

@interface StartPageWhatsNewInSafariCollectionViewItemSection : NSObject

@property (weak, nonatomic) NSImageView *icon;
@property (weak, nonatomic) NSTextField *title;
@property (weak, nonatomic) NSTextField *subtitle;
@property (weak, nonatomic) NSGridCell *cell;
@property (nonatomic) BOOL hidden;

- (void).cxx_destruct;
- (id)initWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2 cell:(id)a3;
- (void)updateFieldsWithExplanationItem:(id)a0;

@end
