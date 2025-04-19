@class NSColor;

@interface CNUIColorRepository : NSObject

@property (class, readonly, nonatomic) NSColor *quickActionEnabledLabelTextColor;
@property (class, readonly, nonatomic) NSColor *quickActionDisabledLabelTextColor;
@property (class, readonly, nonatomic) NSColor *disambiguationMenuItemLabelTextColor;
@property (class, readonly, nonatomic) NSColor *disambiguationMenuItemValueTextColor;
@property (class, readonly, nonatomic) NSColor *disambiguationMenuActionTitleTextColor;
@property (class, readonly, nonatomic) NSColor *contactPickerBorderColor;
@property (class, readonly, nonatomic) NSColor *contactPickerSectionSeparatorColor;
@property (class, readonly, nonatomic) NSColor *contactPickerNameEnabledColor;
@property (class, readonly, nonatomic) NSColor *contactPickerNameDisabledColor;
@property (class, readonly, nonatomic) NSColor *contactPickerDatumValueTextColor;
@property (class, readonly, nonatomic) NSColor *contactPickerDatumValueMouseOverTextColor;
@property (class, readonly, nonatomic) NSColor *contactPickerSectionHeaderTextColor;
@property (class, readonly, nonatomic) NSColor *contactCardViewControllerNoContactLabelTextColor;
@property (class, readonly, nonatomic) NSColor *contactNameViewControllShareLabelTextColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorAddPhotoButtonColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorSelectedAvatarOutlineColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorAccountNameLabelTextColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorSelectedPhotoOutlineColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorSourcesListBackgroundColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorChangeProfilePictureLabelTextColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorLikenessPickerBackgroundColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorZoomSliderBackgroundColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorZoomSliderShadowColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorCameraViewfinderBackgroundColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorCameraViewfinderMaskFillColorColor;
@property (class, readonly, nonatomic) NSColor *avatarEditorBuddyButtonTextColor;
@property (class, readonly, nonatomic) NSColor *avatarViewSihlouetteBackgroundColor;
@property (class, readonly, nonatomic) NSColor *avatarViewSihlouetteLayerBackgroundColorColor;
@property (class, readonly, nonatomic) NSColor *avatarViewSihlouetteLayerSelectedBackgroundColorColor;
@property (class, readonly, nonatomic) NSColor *avatarViewEditOverlayGradientBeginColor;
@property (class, readonly, nonatomic) NSColor *avatarViewEditOverlayGradientEndColor;
@property (class, readonly, nonatomic) NSColor *avatarViewEditOverlayArrowColor;
@property (class, readonly, nonatomic) NSColor *avatarViewEditLabelTextColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleSelectedForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleSelectedBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleSelectedBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleGrayForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleGrayBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleGrayBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantLightForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantLightBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantLightBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantDarkForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantDarkBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleVibrantDarkBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleDarkForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleDarkBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleDarkBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteOpaqueForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteOpaqueBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteOpaqueBorderColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteForegroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteBackgroundColor;
@property (class, readonly, nonatomic) NSColor *contactIconStyleWhiteBorderColor;
@property (class, readonly, nonatomic) NSColor *touchBarContactViewControllerRemoveRowButtonBackgroundColor;
@property (class, readonly, nonatomic) NSColor *downtimeWhitelistPersistedContactTextColor;
@property (class, readonly, nonatomic) NSColor *downtimeWhitelistNotPersistedContactTextColor;
@property (class, readonly, nonatomic) NSColor *downtimeWhitelistUnreachableContactGlyphColor;
@property (class, readonly, nonatomic) NSColor *downtimeWhitelistContactTypeTextColor;
@property (class, readonly, nonatomic) NSColor *downtimeSharingEnabledWarningTextColor;

+ (id)bundle;
+ (id)colorNamed:(id)a0;

@end
