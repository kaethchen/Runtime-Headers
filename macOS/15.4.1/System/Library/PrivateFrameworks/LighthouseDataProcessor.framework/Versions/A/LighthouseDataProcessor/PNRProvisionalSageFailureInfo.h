@class NSString, NSData, PNRProvisionalSageErrorInfo;

@interface PNRProvisionalSageFailureInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *failureType;
@property (nonatomic) BOOL hasFailureType;
@property (copy, nonatomic) NSString *failureSubType;
@property (nonatomic) BOOL hasFailureSubType;
@property (retain, nonatomic) PNRProvisionalSageErrorInfo *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) PNRProvisionalSageErrorInfo *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) PNRProvisionalSageErrorInfo *underUnderlyingError;
@property (nonatomic) BOOL hasUnderUnderlyingError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteError;
- (void)deleteFailureSubType;
- (void)deleteFailureType;
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;

@end
