@class NSString, NSImage;

@interface PerSitePreferenceUserInterfaceInformation : NSObject

@property (readonly, copy, nonatomic) NSString *localizedPopoverName;
@property (readonly, nonatomic) long long popoverDisplayOption;
@property (readonly, copy, nonatomic) NSString *localizedPreferencePaneName;
@property (readonly, copy, nonatomic) NSString *localizedPreferencePaneDescription;
@property (readonly, copy, nonatomic) NSString *localizedPreferencePaneTableAccessibilityLabel;
@property (readonly, nonatomic) NSImage *preferencePaneIcon;
@property (readonly, copy, nonatomic) NSString *localizedPlaceholderToDisplayIfNotConfigurable;
@property (copy, nonatomic) NSString *localizedDefaultPolicyLabel;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedPopoverName:(id)a0 popoverDisplayOption:(long long)a1 localizedPreferencePaneName:(id)a2 localizedPreferencePaneDescription:(id)a3 localizedPreferencePaneTableAccessibilityLabel:(id)a4 preferencePaneIcon:(id)a5;
- (id)initWithLocalizedPopoverName:(id)a0 popoverDisplayOption:(long long)a1 localizedPreferencePaneName:(id)a2 localizedPreferencePaneDescription:(id)a3 localizedPreferencePaneTableAccessibilityLabel:(id)a4 preferencePaneIcon:(id)a5 localizedPlaceholderToDisplayIfNotConfigurable:(id)a6;

@end
