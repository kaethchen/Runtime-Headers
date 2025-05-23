@class PBUnknownFields;

@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    BOOL _proxyConnection;
    BOOL _reusedConnection;
    struct { unsigned char has_connectEnd : 1; unsigned char has_connectStart : 1; unsigned char has_domainLookupEnd : 1; unsigned char has_domainLookupStart : 1; unsigned char has_fetchStart : 1; unsigned char has_requestEnd : 1; unsigned char has_requestStart : 1; unsigned char has_responseEnd : 1; unsigned char has_responseStart : 1; unsigned char has_secureConnectEnd : 1; unsigned char has_secureConnectStart : 1; unsigned char has_protocolName : 1; unsigned char has_resourceFetchType : 1; unsigned char has_proxyConnection : 1; unsigned char has_reusedConnection : 1; } _flags;
}

@property (nonatomic) BOOL hasFetchStart;
@property (nonatomic) double fetchStart;
@property (nonatomic) BOOL hasDomainLookupStart;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) BOOL hasDomainLookupEnd;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) BOOL hasConnectStart;
@property (nonatomic) double connectStart;
@property (nonatomic) BOOL hasSecureConnectStart;
@property (nonatomic) double secureConnectStart;
@property (nonatomic) BOOL hasSecureConnectEnd;
@property (nonatomic) double secureConnectEnd;
@property (nonatomic) BOOL hasConnectEnd;
@property (nonatomic) double connectEnd;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) BOOL hasResponseStart;
@property (nonatomic) double responseStart;
@property (nonatomic) BOOL hasResponseEnd;
@property (nonatomic) double responseEnd;
@property (nonatomic) BOOL hasProtocolName;
@property (nonatomic) int protocolName;
@property (nonatomic) BOOL hasProxyConnection;
@property (nonatomic) BOOL proxyConnection;
@property (nonatomic) BOOL hasReusedConnection;
@property (nonatomic) BOOL reusedConnection;
@property (nonatomic) BOOL hasResourceFetchType;
@property (nonatomic) int resourceFetchType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsProtocolName:(id)a0;
- (int)StringAsResourceFetchType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)protocolNameAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (id)resourceFetchTypeAsString:(int)a0;

@end
