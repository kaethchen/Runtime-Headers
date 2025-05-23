@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    BOOL _rnfTriggered;
    struct { unsigned char has_requestEnd : 1; unsigned char has_requestStart : 1; unsigned char has_httpResponseCode : 1; unsigned char has_redirectCount : 1; unsigned char has_requestDataSize : 1; unsigned char has_responseDataSize : 1; unsigned char has_rnfTriggered : 1; unsigned char read_unknownFields : 1; unsigned char read_serviceIpAddress : 1; unsigned char read_transactionMetrics : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasHttpResponseCode;
@property (nonatomic) int httpResponseCode;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic) BOOL hasRnfTriggered;
@property (nonatomic) BOOL rnfTriggered;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) int redirectCount;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)transactionMetricsType;

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
- (void)addTransactionMetrics:(id)a0;
- (void)clearTransactionMetrics;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)transactionMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionMetricsCount;

@end
