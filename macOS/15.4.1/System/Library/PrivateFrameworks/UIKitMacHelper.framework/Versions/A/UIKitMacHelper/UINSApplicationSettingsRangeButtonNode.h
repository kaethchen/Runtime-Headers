@class NSString;

@interface UINSApplicationSettingsRangeButtonNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, nonatomic) id minimumValue;
@property (readonly, nonatomic) id maximumValue;
@property (readonly, nonatomic) id incrementImageName;
@property (readonly, nonatomic) id decrementImageName;
@property (readonly, nonatomic) NSString *localizedIncrementToolTip;
@property (readonly, nonatomic) NSString *localizedDecrementToolTip;
@property (readonly, nonatomic) NSString *localizedFooter;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
