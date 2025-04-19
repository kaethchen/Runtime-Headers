@interface EXSNotesItemProperties : EXSItemProperties

@property (nonatomic) BOOL noteIsMovingFolders;

+ (id)htmlFromPlainText:(id)a0;
+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
