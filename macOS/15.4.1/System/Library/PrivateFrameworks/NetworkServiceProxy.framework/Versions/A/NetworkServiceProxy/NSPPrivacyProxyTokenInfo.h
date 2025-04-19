@class NSString, NSData, NSMutableArray;

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSData *tokenKeyID;
@property (retain, nonatomic) NSMutableArray *unactivatedTokenLists;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (retain, nonatomic) NSMutableArray *tokenRequestLists;

+ (Class)tokenRequestListType;
+ (Class)unactivatedTokenListType;

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
- (void)addTokenRequestList:(id)a0;
- (void)addUnactivatedTokenList:(id)a0;
- (void)clearTokenRequestLists;
- (void)clearUnactivatedTokenLists;
- (id)tokenRequestListAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenRequestListsCount;
- (id)unactivatedTokenListAtIndex:(unsigned long long)a0;
- (unsigned long long)unactivatedTokenListsCount;

@end
