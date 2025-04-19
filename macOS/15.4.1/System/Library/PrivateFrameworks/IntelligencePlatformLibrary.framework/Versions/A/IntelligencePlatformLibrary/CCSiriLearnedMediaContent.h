@class NSString;

@interface CCSiriLearnedMediaContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *userPhrasedSongName;
@property (readonly, nonatomic) NSString *userPhrasedArtistName;
@property (readonly, nonatomic) NSString *userPhrasedAlbumName;
@property (readonly, nonatomic) NSString *userPhrasedEntityName;
@property (readonly, nonatomic) NSString *userPhrasedVersion;
@property (readonly, nonatomic) NSString *suggestedAdamId;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithUserPhrasedSongName:(id)a0 userPhrasedArtistName:(id)a1 userPhrasedAlbumName:(id)a2 userPhrasedEntityName:(id)a3 userPhrasedVersion:(id)a4 suggestedAdamId:(id)a5 error:(id *)a6;

@end
