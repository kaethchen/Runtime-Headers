@class NSString;

@interface PXSRestoreDefaultSettingsRowAction : PXSRowAction

@property (copy, nonatomic) NSString *settingsKeyPath;

+ (id)actionWithSettingsKeyPath:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
