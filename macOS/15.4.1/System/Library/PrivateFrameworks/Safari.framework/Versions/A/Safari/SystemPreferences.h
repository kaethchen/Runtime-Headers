@interface SystemPreferences : NSObject

+ (BOOL)_openSettingsExtension:(id)a0 subsection:(id)a1;
+ (BOOL)openAppleIDPreferences;
+ (BOOL)openDateAndTimePreferences;
+ (BOOL)openLanguageAndRegionPreferences;
+ (BOOL)openNetworkPreferences:(id)a0;

@end
