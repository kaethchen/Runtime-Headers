@class NSString, TSSPropertySet;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (class, readonly, nonatomic) TSSPropertySet *properties;
@property (class, readonly, nonatomic) TSSPropertySet *propertiesAllowingNSNull;
@property (class, readonly, nonatomic) TSSPropertySet *deprecatedProperties;
@property (class, readonly, nonatomic) TSSPropertySet *emphasisProperties;
@property (class, readonly, nonatomic) TSSPropertySet *nonEmphasisCharacterProperties;
@property (class, readonly, nonatomic) NSString *nullStyleName;

@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullStyleWithContext:(id)a0;

- (int)writingDirection;
- (BOOL)transformsFontSizes;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
