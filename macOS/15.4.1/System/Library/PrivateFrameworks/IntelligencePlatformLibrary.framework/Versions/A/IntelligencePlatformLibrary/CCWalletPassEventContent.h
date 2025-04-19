@class NSArray, NSString;

@interface CCWalletPassEventContent : CCItemMessage

@property (readonly, nonatomic) NSArray *artistIDs;
@property (readonly, nonatomic) NSString *awayTeamAbbreviation;
@property (readonly, nonatomic) NSString *awayTeamName;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSString *homeTeamAbbreviation;
@property (readonly, nonatomic) NSString *homeTeamName;
@property (readonly, nonatomic) NSArray *performerNames;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithArtistIDs:(id)a0 awayTeamAbbreviation:(id)a1 awayTeamName:(id)a2 eventName:(id)a3 eventType:(id)a4 genre:(id)a5 homeTeamAbbreviation:(id)a6 homeTeamName:(id)a7 performerNames:(id)a8 error:(id *)a9;

@end
