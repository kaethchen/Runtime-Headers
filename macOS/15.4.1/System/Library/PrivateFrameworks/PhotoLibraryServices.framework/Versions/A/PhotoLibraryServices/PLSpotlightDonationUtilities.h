@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL spotlightPrivateIndexEnabled;

+ (id)domainIdentifierForPhotoLibraryIdentifier:(long long)a0;
+ (id)photosBundleIdentifier;
+ (BOOL)shouldUseSpotlightPrivateIndexForLibraryIdentifier:(long long)a0;
+ (id)bundleIdentifierForAsset:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0 wellKnownLibraryIdentifier:(long long)a1;
+ (BOOL)isUniversalSearchEnabledForPhotoLibrary:(id)a0;
+ (BOOL)shouldDisablePhotosLegacySearchDonation;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (long long)wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;

@end
