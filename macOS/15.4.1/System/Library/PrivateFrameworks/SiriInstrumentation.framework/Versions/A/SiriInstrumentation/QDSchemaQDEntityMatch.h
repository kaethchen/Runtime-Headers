@class NSArray, NSString, NSData;

@interface QDSchemaQDEntityMatch : SISchemaInstrumentationMessage {
    struct { unsigned char startIndex : 1; unsigned char endIndex : 1; unsigned char matcher : 1; unsigned char matchScore : 1; } _has;
}

@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (copy, nonatomic) NSArray *matchingTransforms;
@property (nonatomic) int matcher;
@property (nonatomic) BOOL hasMatcher;
@property (nonatomic) float matchScore;
@property (nonatomic) BOOL hasMatchScore;
@property (copy, nonatomic) NSString *originAppBundleId;
@property (nonatomic) BOOL hasOriginAppBundleId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addMatchingTransforms:(int)a0;
- (void)clearMatchingTransforms;
- (void)deleteEndIndex;
- (void)deleteMatchScore;
- (void)deleteMatcher;
- (void)deleteMatchingTransforms;
- (void)deleteOriginAppBundleId;
- (void)deleteStartIndex;
- (int)matchingTransformsAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingTransformsCount;
- (id)suppressMessageUnderConditions;

@end
