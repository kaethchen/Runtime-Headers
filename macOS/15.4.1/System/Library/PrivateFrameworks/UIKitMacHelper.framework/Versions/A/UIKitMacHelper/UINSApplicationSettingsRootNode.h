@class NSString, NSBundle;

@interface UINSApplicationSettingsRootNode : UINSApplicationSettingsNode

@property (readonly, nonatomic) NSString *stringsTableName;
@property (readonly, nonatomic) NSBundle *settingsBundle;
@property (readonly, nonatomic) NSString *applicationGroupContainerIdentifier;
@property (readonly, nonatomic) NSString *toolbarIconImageName;
@property (readonly, nonatomic) NSString *preferencePaneSystemSymbolName;
@property (readonly, nonatomic) NSString *helpAnchorName;
@property (readonly, nonatomic) NSString *helpBookName;

+ (id)_rootNodeWithSettingsBundle:(id)a0;
+ (id)_standardSystemSettingsPreferenceSpecifiers;
+ (id)applicationSettingsRootNode;
+ (id)applicationSettingsRootNodeFilteredByFilter:(long long)a0;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_copyWithFilter:(long long)a0;
- (id)_initWithPlistAtPath:(id)a0 bundle:(id)a1;
- (id)_initWithPlistAtPath:(id)a0 bundle:(id)a1 internalSpecifiers:(id)a2;

@end
