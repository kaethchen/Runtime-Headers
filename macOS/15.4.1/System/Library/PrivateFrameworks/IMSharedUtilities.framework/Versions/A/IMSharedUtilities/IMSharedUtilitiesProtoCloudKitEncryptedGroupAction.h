@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupAction : PBCodable <NSCopying> {
    struct { unsigned char groupActionType : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasGroupActionType;
@property (nonatomic) long long groupActionType;
@property (readonly, nonatomic) BOOL hasOtherHandle;
@property (retain, nonatomic) NSString *otherHandle;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

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

@end
