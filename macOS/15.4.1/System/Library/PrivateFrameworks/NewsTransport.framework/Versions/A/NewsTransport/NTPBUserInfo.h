@class NSString, NSMutableArray;

@interface NTPBUserInfo : PBCodable <NSCopying> {
    struct { unsigned char subscriberType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStorefrontId;
@property (retain, nonatomic) NSString *storefrontId;
@property (retain, nonatomic) NSMutableArray *preferredLanguages;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int subscriberType;

+ (Class)preferredLanguagesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPreferredLanguages:(id)a0;
- (void)clearPreferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)preferredLanguagesCount;

@end
