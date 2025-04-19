@class NSData, POWSchemaProvisionalPOWProcessUsage;

@interface POWSchemaProvisionalPOWUsage : SISchemaInstrumentationMessage {
    struct { unsigned char process : 1; unsigned char context : 1; } _has;
}

@property (nonatomic) int process;
@property (nonatomic) BOOL hasProcess;
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *processUsage;
@property (nonatomic) BOOL hasProcessUsage;
@property (nonatomic) int context;
@property (nonatomic) BOOL hasContext;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContext;
- (void)deleteProcess;
- (void)deleteProcessUsage;

@end
