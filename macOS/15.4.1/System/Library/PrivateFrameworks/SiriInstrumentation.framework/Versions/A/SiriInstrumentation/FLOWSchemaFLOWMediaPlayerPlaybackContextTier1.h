@class NSString, NSArray, USOSchemaUSOGraph, SISchemaUUID, USOSchemaUSOGraphTier1, NSData;

@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char adamId : 1; unsigned char isNlsResult : 1; unsigned char isNlsContainerResult : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) BOOL hasContentTitle;
@property (nonatomic) unsigned int adamId;
@property (nonatomic) BOOL hasAdamId;
@property (copy, nonatomic) NSString *adamIdString;
@property (nonatomic) BOOL hasAdamIdString;
@property (copy, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) USOSchemaUSOGraph *u2UsoGraph;
@property (nonatomic) BOOL hasU2UsoGraph;
@property (retain, nonatomic) USOSchemaUSOGraphTier1 *u2UsoGraphTier1;
@property (nonatomic) BOOL hasU2UsoGraphTier1;
@property (nonatomic) BOOL isNlsResult;
@property (nonatomic) BOOL hasIsNlsResult;
@property (nonatomic) BOOL isNlsContainerResult;
@property (nonatomic) BOOL hasIsNlsContainerResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSearchResults:(id)a0;
- (void)clearSearchResults;
- (id)initWithJSON:(id)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchResultsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAdamId;
- (void)deleteAdamIdString;
- (void)deleteContentTitle;
- (void)deleteIsNlsContainerResult;
- (void)deleteIsNlsResult;
- (void)deleteLinkId;
- (void)deleteSearchResults;
- (void)deleteU2UsoGraph;
- (void)deleteU2UsoGraphTier1;
- (id)suppressMessageUnderConditions;

@end
