@class NSDictionary, NSData, NSString;

@interface SFPhotosAttributes : NSObject <SFPhotosAttributes, NSSecureCoding, NSCopying> {
    struct { unsigned char positionIndex : 1; unsigned char isEmbeddingMatched : 1; unsigned char isMetadataMatched : 1; unsigned char isVideo : 1; unsigned char isFavorite : 1; unsigned char photosSuggestionType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long positionIndex;
@property (nonatomic) BOOL isEmbeddingMatched;
@property (nonatomic) BOOL isMetadataMatched;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) int photosSuggestionType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasIsFavorite;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasIsVideo;
- (BOOL)hasIsEmbeddingMatched;
- (BOOL)hasIsMetadataMatched;
- (BOOL)hasPhotosSuggestionType;
- (BOOL)hasPositionIndex;

@end
