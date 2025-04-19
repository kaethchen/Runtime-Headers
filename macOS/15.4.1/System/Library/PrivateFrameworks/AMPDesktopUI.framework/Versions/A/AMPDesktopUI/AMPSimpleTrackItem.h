@class NSTextField, NSString, _TtC12AMPDesktopUI24AMPRollableArtworkLockup, NSAttributedString;
@protocol AMPSimpleTrackItemLockupModel;

@interface AMPSimpleTrackItem : NSCollectionViewItem

@property (retain, nonatomic) _TtC12AMPDesktopUI24AMPRollableArtworkLockup *artwork;
@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSString *axLabel;
@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *subtitleField;
@property (retain, nonatomic) id<AMPSimpleTrackItemLockupModel> viewModel;

+ (id)keyPathsForValuesAffectingAttributedTitle;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityAttributeValue:(id)a0;
- (void)viewDidLoad;
- (id)propertyKeysForViewSpy;
- (void)reflectAddAction:(id)a0;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
