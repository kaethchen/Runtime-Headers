@class GEOPDResultRefinementToggle, PBDataReader, GEOPDResultRefinementRange, GEOPDResultRefinementGuidesHome, GEOPDResultRefinementSort, PBUnknownFields, GEOPDResultRefinementMultiSelect, GEOPDResultRefinementOpenOptions;

@interface GEOPDResultRefinement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementGuidesHome *_guidesHome;
    GEOPDResultRefinementMultiSelect *_multiSelect;
    GEOPDResultRefinementOpenOptions *_openOptions;
    GEOPDResultRefinementRange *_range;
    GEOPDResultRefinementSort *_sort;
    GEOPDResultRefinementToggle *_toggle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultRefinementType;
    struct { unsigned char has_resultRefinementType : 1; unsigned char read_unknownFields : 1; unsigned char read_guidesHome : 1; unsigned char read_multiSelect : 1; unsigned char read_openOptions : 1; unsigned char read_range : 1; unsigned char read_sort : 1; unsigned char read_toggle : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
