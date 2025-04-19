@class NSString, NSData;

@interface MHSchemaFirstPassChannelSelectionScore : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassScore : 1; } _has;
}

@property (copy, nonatomic) NSString *channelString;
@property (nonatomic) BOOL hasChannelString;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteChannelString;
- (void)deleteFirstPassScore;
- (id)suppressMessageUnderConditions;

@end
