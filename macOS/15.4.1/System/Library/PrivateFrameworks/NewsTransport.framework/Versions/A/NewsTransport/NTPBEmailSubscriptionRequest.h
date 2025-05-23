@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {
    struct { unsigned char dsId : 1; } _has;
}

@property (nonatomic) BOOL hasDsId;
@property (nonatomic) long long dsId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
