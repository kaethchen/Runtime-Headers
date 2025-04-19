@class NSString, NSArray;

@interface UINSApplicationSettingsRadioGroup : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, nonatomic) NSString *localizedFooter;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSArray *localizedValueTitles;
@property (readonly, nonatomic) BOOL shouldSortByLocalizedTitles;
@property (readonly, nonatomic) NSString *disabledStateKey;
@property (readonly, nonatomic) NSString *localizedDisabledFooter;
@property (readonly, nonatomic) NSArray *localizedDescriptions;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
