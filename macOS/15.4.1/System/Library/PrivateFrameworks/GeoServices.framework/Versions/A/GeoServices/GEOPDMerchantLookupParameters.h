@class GEOPDIdentityMerchantInformation, NSString, PBDataReader, PBUnknownFields, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, GEOLocation, GEOPDAdamAppIdentifier;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    GEOPDIdentityMerchantInformation *_identityMerchantInformation;
    NSString *_industryCategory;
    long long _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    double _transactionLocationAge;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transactionStatus;
    int _transactionType;
    BOOL _coarseLocationUsed;
    BOOL _enableBrandMuidFallback;
    BOOL _fuzzyMatched;
    struct { unsigned char has_industryCode : 1; unsigned char has_transactionLocationAge : 1; unsigned char has_transactionTimestamp : 1; unsigned char has_transactionStatus : 1; unsigned char has_transactionType : 1; unsigned char has_coarseLocationUsed : 1; unsigned char has_enableBrandMuidFallback : 1; unsigned char has_fuzzyMatched : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_identityMerchantInformation : 1; unsigned char read_industryCategory : 1; unsigned char read_merchantCode : 1; unsigned char read_merchantInformation : 1; unsigned char read_paymentNetwork : 1; unsigned char read_rawMerchantCode : 1; unsigned char read_terminalId : 1; unsigned char read_transactionCurrencyCode : 1; unsigned char read_transactionId : 1; unsigned char read_transactionLocation : 1; unsigned char read_warsawMerchantIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPaymentNetwork;
@property (retain, nonatomic) NSString *paymentNetwork;
@property (readonly, nonatomic) BOOL hasMerchantCode;
@property (retain, nonatomic) NSString *merchantCode;
@property (nonatomic) BOOL hasTransactionTimestamp;
@property (nonatomic) double transactionTimestamp;
@property (readonly, nonatomic) BOOL hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (nonatomic) BOOL hasTransactionLocationAge;
@property (nonatomic) double transactionLocationAge;
@property (readonly, nonatomic) BOOL hasRawMerchantCode;
@property (retain, nonatomic) NSString *rawMerchantCode;
@property (readonly, nonatomic) BOOL hasIndustryCategory;
@property (retain, nonatomic) NSString *industryCategory;
@property (nonatomic) BOOL hasIndustryCode;
@property (nonatomic) long long industryCode;
@property (nonatomic) BOOL hasEnableBrandMuidFallback;
@property (nonatomic) BOOL enableBrandMuidFallback;
@property (readonly, nonatomic) BOOL hasTerminalId;
@property (retain, nonatomic) NSString *terminalId;
@property (readonly, nonatomic) BOOL hasTransactionCurrencyCode;
@property (retain, nonatomic) NSString *transactionCurrencyCode;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) int transactionType;
@property (readonly, nonatomic) BOOL hasWarsawMerchantIdentifier;
@property (retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawMerchantIdentifier;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantInformation;
@property (retain, nonatomic) GEOPDMerchantInformation *merchantInformation;
@property (nonatomic) BOOL hasTransactionStatus;
@property (nonatomic) int transactionStatus;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) BOOL hasFuzzyMatched;
@property (nonatomic) BOOL fuzzyMatched;
@property (nonatomic) BOOL hasCoarseLocationUsed;
@property (nonatomic) BOOL coarseLocationUsed;
@property (readonly, nonatomic) BOOL hasIdentityMerchantInformation;
@property (retain, nonatomic) GEOPDIdentityMerchantInformation *identityMerchantInformation;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (int)StringAsTransactionStatus:(id)a0;
- (int)StringAsTransactionType:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)transactionStatusAsString:(int)a0;
- (id)transactionTypeAsString:(int)a0;

@end
