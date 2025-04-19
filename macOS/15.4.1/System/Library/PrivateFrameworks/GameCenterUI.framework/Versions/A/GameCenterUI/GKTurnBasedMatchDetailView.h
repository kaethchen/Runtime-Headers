@class NSTextField, GKTurnBasedMatch, NSView, GKButton, NSString, NSButton, GKDashboardPlayerPhotoView;

@interface GKTurnBasedMatchDetailView : NSView

@property NSView *contentContainerView;
@property NSTextField *playingWithLabel;
@property NSTextField *createdLabel;
@property NSTextField *infoLabel;
@property GKButton *playButton;
@property NSButton *removeButton;
@property NSButton *doneButton;
@property NSView *avatarContainer;
@property NSTextField *titleLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *avatarView;
@property NSView *contentView;
@property (retain) GKTurnBasedMatch *match;
@property (copy) NSString *playTitle;
@property SEL playAction;
@property BOOL playEnabled;
@property (copy) NSString *removeTitle;
@property SEL removeAction;
@property BOOL removeEnabled;
@property (copy) NSString *infoText;
@property SEL doneAction;
@property (retain, nonatomic) NSString *playerID;

+ (id)detailView;

- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)awakeFromNib;
- (void)done:(id)a0;
- (void)play:(id)a0;
- (void)didUpdateModel;
- (id)playingWithString;

@end
