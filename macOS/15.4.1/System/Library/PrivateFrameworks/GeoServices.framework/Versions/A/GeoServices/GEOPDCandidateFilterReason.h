@class GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDCandidateFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadata *_sortMetadata;
    int _reasonType;
    float _viewportExpansionFactor;
    struct { unsigned char has_reasonType : 1; unsigned char has_viewportExpansionFactor : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
