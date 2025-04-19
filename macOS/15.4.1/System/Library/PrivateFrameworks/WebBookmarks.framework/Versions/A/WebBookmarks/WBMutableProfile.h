@class NSString, NSArray, NSDictionary, WBSCRDTPosition, WBSNamedColorOption, NSData;

@interface WBMutableProfile : WBProfile

@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (retain, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSDictionary *settingsDictionary;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) WBSNamedColorOption *color;
@property (copy, nonatomic) NSArray *tabGroups;
@property (copy, nonatomic) NSData *startPageSectionsDataRepresentation;

+ (id)createDefaultProfileWithTabGroups:(id)a0;

- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (void)setTitle:(id)a0;
- (void)setColor:(id)a0;
- (void)setSettingsDictionary:(id)a0;
- (id)settingsDictionary;
- (void)setSymbolImageName:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (void)markBackgroundImageAsModified;
- (void)setSyncable:(BOOL)a0;
- (void)setStartPageSectionsDataRepresentation:(id)a0;
- (void)setDatabaseIdentifier:(int)a0;
- (id)initWithBookmark:(id)a0 kind:(long long)a1 tabGroups:(id)a2;
- (id)initWithBookmark:(id)a0 tabGroups:(id)a1;
- (void)mergeWithProfile:(id)a0;
- (void)resumeIncrementingFields:(id)a0;
- (void)setTabGroups:(id)a0;

@end
