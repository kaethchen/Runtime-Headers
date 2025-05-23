@class NSData, NSString, NSMutableArray;

@interface BMPBUserActivityMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char hasAssociatedImageRepresentation : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasUserActivityData;
@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL hasAssociatedBundleId;
@property (retain, nonatomic) NSString *associatedBundleId;
@property (readonly, nonatomic) BOOL hasAssociatedURLString;
@property (retain, nonatomic) NSString *associatedURLString;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasHasAssociatedImageRepresentation;
@property (nonatomic) BOOL hasAssociatedImageRepresentation;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;

+ (Class)topicsType;

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
- (void)addTopics:(id)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;

@end
