@class NSArray, NSImageView, NSTextField;

@interface AppExtensionPermissionMigrationBanner : Banner {
    NSArray *_migratedExtensionComposedIdentifiers;
}

@property (weak, nonatomic) NSTextField *descriptionLabel;
@property (weak, nonatomic) NSImageView *extensionsPuzzlePieceImageView;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bannerNibName;
- (void)dismissBanner:(id)a0;
- (void)resetAllPermissions:(id)a0;
- (BOOL)setUpForExtensions:(id)a0;

@end
