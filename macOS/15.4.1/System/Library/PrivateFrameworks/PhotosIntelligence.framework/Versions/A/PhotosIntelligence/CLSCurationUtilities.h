@interface CLSCurationUtilities : NSObject

+ (BOOL)isBlocklistedImportedByBundleIdentifier:(id)a0;
+ (id)blockedImportedByBundleIdentifiers;
+ (BOOL)isRiskyFileFormatWithAsset:(id)a0;

@end
