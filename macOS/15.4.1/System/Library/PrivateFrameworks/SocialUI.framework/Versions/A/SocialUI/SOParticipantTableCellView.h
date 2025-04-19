@class NSTextField, NSString, NSArray, SOAVPopUpButtonViewController, NSTrackingArea, NSStackView, NSImageView, CNAvatarViewController;

@interface SOParticipantTableCellView : NSTableCellView <CNAvatarViewDelegate> {
    NSTrackingArea *_iconsButtonTracking;
}

@property (retain) NSStackView *horizontalLayoutStackView;
@property (retain) NSTextField *locationLabel;
@property (retain) NSImageView *verifiedBusinessImageView;
@property (retain) CNAvatarViewController *avatarViewController;
@property (retain) SOAVPopUpButtonViewController *audioPopUpButtonViewController;
@property (retain) SOAVPopUpButtonViewController *videoPopUpButtonViewController;
@property (retain) SOAVPopUpButtonViewController *screenSharingPopUpButtonViewController;
@property (retain) NSArray *stackedLabelsConstraints;
@property BOOL showsLocationLabel;
@property (nonatomic) BOOL hideAVButtonsOnRollover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_blueVideoImage;
+ (id)_blueAudioImage;
+ (id)_blueScreenSharingImage;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)removeParticipant:(id)a0;
- (id)accessibilityLabel;
- (void)awakeFromNib;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)avatarViewController:(id)a0 requiredImageForContact:(id)a1;
- (void)_cnContactDidChange:(id)a0;
- (void)_hideIconSubviews:(BOOL)a0;
- (void)_imFMFSessionLocationReceived:(id)a0;
- (void)_imFMFSessionRelationshipStatusDidChange:(id)a0;
- (void)_imHandleInfoDidChange:(id)a0;
- (void)_imHandlePictureDidChange:(id)a0;
- (void)_setVerifiedBusinessImageView;
- (void)_updateBuddyPicture;
- (void)_updateContactName;
- (void)setShowsLocationLabel:(BOOL)a0;
- (BOOL)showsLocationLabel;
- (void)updateLocation;

@end
