@class PBDataReader, PBUnknownFields;

@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { double *list; unsigned long long count; unsigned long long size; } _fusedConfidences;
    struct { double *list; unsigned long long count; unsigned long long size; } _solverConfidences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numberOfInliers;
    unsigned int _numberOfKeypoints;
    unsigned int _numberOfMatches;
    unsigned int _tKptsMs;
    unsigned int _tMatchMs;
    unsigned int _tPoseMs;
    struct { unsigned char has_numberOfInliers : 1; unsigned char has_numberOfKeypoints : 1; unsigned char has_numberOfMatches : 1; unsigned char has_tKptsMs : 1; unsigned char has_tMatchMs : 1; unsigned char has_tPoseMs : 1; unsigned char read_unknownFields : 1; unsigned char read_fusedConfidences : 1; unsigned char read_solverConfidences : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasNumberOfKeypoints;
@property (nonatomic) unsigned int numberOfKeypoints;
@property (nonatomic) BOOL hasNumberOfMatches;
@property (nonatomic) unsigned int numberOfMatches;
@property (nonatomic) BOOL hasNumberOfInliers;
@property (nonatomic) unsigned int numberOfInliers;
@property (readonly, nonatomic) unsigned long long solverConfidencesCount;
@property (readonly, nonatomic) double *solverConfidences;
@property (readonly, nonatomic) unsigned long long fusedConfidencesCount;
@property (readonly, nonatomic) double *fusedConfidences;
@property (nonatomic) BOOL hasTKptsMs;
@property (nonatomic) unsigned int tKptsMs;
@property (nonatomic) BOOL hasTMatchMs;
@property (nonatomic) unsigned int tMatchMs;
@property (nonatomic) BOOL hasTPoseMs;
@property (nonatomic) unsigned int tPoseMs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
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
- (void)addFusedConfidence:(double)a0;
- (void)addSolverConfidence:(double)a0;
- (void)clearFusedConfidences;
- (void)clearSolverConfidences;
- (void)clearUnknownFields:(BOOL)a0;
- (double)fusedConfidenceAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setFusedConfidences:(double *)a0 count:(unsigned long long)a1;
- (void)setSolverConfidences:(double *)a0 count:(unsigned long long)a1;
- (double)solverConfidenceAtIndex:(unsigned long long)a0;

@end
