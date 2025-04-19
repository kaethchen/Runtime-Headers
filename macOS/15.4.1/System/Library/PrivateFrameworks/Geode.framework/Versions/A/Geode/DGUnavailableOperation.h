@class NSDictionary, NSString;

@interface DGUnavailableOperation : DGOperation {
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
    NSString *_identifier;
}

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)identifier;
- (void)setEnabled:(BOOL)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEnabled;
- (id)attributes;
- (id)initWithOperation:(id)a0;
- (BOOL)isAvailable;
- (id)settingsDictionary;
- (void)setInteractive:(BOOL)a0;
- (BOOL)isInteractive;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
