@class PBDataReader, NSString, GEOPDBusinessConnectAttributes, GEOPDMultiLocalizedString, GEOLocalizedString, NSMutableArray, PBUnknownFields;

@interface GEOPDLocalizedQueryUnderstandingTaxonomyResultItemBrand : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_businessCardAltCategories;
    NSMutableArray *_businessCardModernAlternateCategories;
    NSString *_businessCardModernPrimaryCategory;
    unsigned long long _businessCardPoiIconType;
    NSString *_businessCardPrefCategory;
    GEOPDBusinessConnectAttributes *_businessConnectAttributes;
    NSMutableArray *_categorys;
    NSString *_countryCode;
    NSMutableArray *_modernPrimaryCategoryIcons;
    GEOPDMultiLocalizedString *_modernPrimaryCategoryNames;
    unsigned long long _muid;
    NSMutableArray *_prefCategoryIcons;
    GEOPDMultiLocalizedString *_prefCategoryNames;
    GEOLocalizedString *_prefDisplayName;
    NSString *_prefPhone;
    NSString *_prefUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isUnclaimable;
    struct { unsigned char has_businessCardPoiIconType : 1; unsigned char has_muid : 1; unsigned char has_isUnclaimable : 1; unsigned char read_unknownFields : 1; unsigned char read_businessCardAltCategories : 1; unsigned char read_businessCardModernAlternateCategories : 1; unsigned char read_businessCardModernPrimaryCategory : 1; unsigned char read_businessCardPrefCategory : 1; unsigned char read_businessConnectAttributes : 1; unsigned char read_categorys : 1; unsigned char read_countryCode : 1; unsigned char read_modernPrimaryCategoryIcons : 1; unsigned char read_modernPrimaryCategoryNames : 1; unsigned char read_prefCategoryIcons : 1; unsigned char read_prefCategoryNames : 1; unsigned char read_prefDisplayName : 1; unsigned char read_prefPhone : 1; unsigned char read_prefUrl : 1; unsigned char wrote_anyField : 1; } _flags;
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
