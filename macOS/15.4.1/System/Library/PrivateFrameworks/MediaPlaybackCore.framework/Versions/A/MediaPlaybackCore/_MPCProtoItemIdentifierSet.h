@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {
    long long _cloudID;
    long long _delegateInfoID;
    long long _purchaseHistoryID;
    long long _storeAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
    NSString *_contentItemID;
    struct { unsigned char cloudID : 1; unsigned char delegateInfoID : 1; unsigned char purchaseHistoryID : 1; unsigned char storeAdamID : 1; unsigned char storeSubscriptionAdamID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
