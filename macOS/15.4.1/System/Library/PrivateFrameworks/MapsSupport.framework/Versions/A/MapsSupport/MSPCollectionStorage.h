@class NSString, NSData, PBUnknownFields;

@interface MSPCollectionStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) BOOL hasCollectionDescription;
@property (retain, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) BOOL hasItemData;
@property (retain, nonatomic) NSData *itemData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
