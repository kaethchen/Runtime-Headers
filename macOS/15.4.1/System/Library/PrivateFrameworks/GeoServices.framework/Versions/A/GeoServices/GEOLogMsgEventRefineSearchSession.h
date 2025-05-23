@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_searchString;
    NSMutableArray *_suggestionItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _refineSearchType;
    int _searchType;
    struct { unsigned char has_refineSearchType : 1; unsigned char has_searchType : 1; unsigned char read_searchString : 1; unsigned char read_suggestionItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) BOOL hasRefineSearchType;
@property (nonatomic) int refineSearchType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *suggestionItems;

+ (BOOL)isValid:(id)a0;
+ (Class)suggestionItemType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRefineSearchType:(id)a0;
- (int)StringAsSearchType:(id)a0;
- (void)addSuggestionItem:(id)a0;
- (void)clearSuggestionItems;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)refineSearchTypeAsString:(int)a0;
- (id)searchTypeAsString:(int)a0;
- (id)suggestionItemAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionItemsCount;

@end
