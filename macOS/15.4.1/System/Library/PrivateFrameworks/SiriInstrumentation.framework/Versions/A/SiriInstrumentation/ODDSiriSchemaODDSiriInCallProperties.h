@class NSData;

@interface ODDSiriSchemaODDSiriInCallProperties : SISchemaInstrumentationMessage {
    struct { unsigned char heySiriHangupEnablementState : 1; unsigned char siriInCallEnablementState : 1; } _has;
}

@property (nonatomic) int heySiriHangupEnablementState;
@property (nonatomic) BOOL hasHeySiriHangupEnablementState;
@property (nonatomic) int siriInCallEnablementState;
@property (nonatomic) BOOL hasSiriInCallEnablementState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriInCallEnablementState;
- (void)deleteHeySiriHangupEnablementState;
- (id)suppressMessageUnderConditions;

@end
