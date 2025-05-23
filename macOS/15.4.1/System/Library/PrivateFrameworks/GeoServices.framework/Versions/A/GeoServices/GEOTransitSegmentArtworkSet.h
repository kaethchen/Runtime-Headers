@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _artworkIndexs;
    NSMutableArray *_clusters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_artworkIndexs : 1; unsigned char read_clusters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long artworkIndexsCount;
@property (readonly, nonatomic) unsigned int *artworkIndexs;
@property (retain, nonatomic) NSMutableArray *clusters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)clusterType;
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
- (id)clusterAtIndex:(unsigned long long)a0;
- (void)addArtworkIndex:(unsigned int)a0;
- (void)addCluster:(id)a0;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)a0;
- (void)clearArtworkIndexs;
- (void)clearClusters;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)clustersCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
