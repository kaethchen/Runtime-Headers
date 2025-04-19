@class NSString, NSData;

@interface PFAIngestExtensionStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char result : 1; unsigned char messageCount : 1; unsigned char missingTimestampCount : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) int result;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) unsigned int missingTimestampCount;
@property (nonatomic) BOOL hasMissingTimestampCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBundleId;
- (void)deleteMessageCount;
- (void)deleteMissingTimestampCount;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
