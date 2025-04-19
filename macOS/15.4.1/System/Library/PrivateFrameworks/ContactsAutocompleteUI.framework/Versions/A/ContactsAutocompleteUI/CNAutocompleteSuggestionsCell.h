@class NSImageView, NSTextField, NSImage, NSString;

@interface CNAutocompleteSuggestionsCell : NSCollectionViewItem

@property (retain, nonatomic) NSImageView *avatarView;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (nonatomic) BOOL drawsSelected;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *displayString;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (void)loadView;
- (void)updateDisplay;

@end
