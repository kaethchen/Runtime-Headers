@class NSArray, NSString;

@interface UINSApplicationSettingsMultiValueNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSArray *localizedValueTitles;
@property (readonly, copy, nonatomic) NSArray *localizedShortValueTitles;
@property (readonly, nonatomic) BOOL shouldSortByLocalizedTitles;
@property (readonly, nonatomic) NSString *localizedDecoration;
@property (readonly, nonatomic) NSString *localizedFooter;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
