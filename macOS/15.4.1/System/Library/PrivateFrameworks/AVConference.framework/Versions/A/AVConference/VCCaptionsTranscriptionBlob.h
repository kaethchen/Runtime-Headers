@class NSMutableArray;

@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying> {
    struct { unsigned char isFinal : 1; unsigned char isLocal : 1; } _has;
}

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL hasIsFinal;
@property (nonatomic) BOOL isFinal;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSegments:(id)a0;
- (void)clearSegments;
- (id)segmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentsCount;
- (id)initWithSFTranscription:(id)a0 final:(BOOL)a1 isLocal:(BOOL)a2 utteranceNumber:(unsigned int)a3 updateNumber:(unsigned int)a4;

@end
