@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSData, NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBFeedPersonalizingItem : PBCodable <NSCopying> {
    struct { unsigned char bodyTextLength : 1; unsigned char publishDateMilliseconds : 1; unsigned char hasAudioTrack : 1; unsigned char hasVideo : 1; unsigned char isAIGenerated : 1; unsigned char isANF : 1; unsigned char isBundlePaid : 1; unsigned char isFeatured : 1; unsigned char isPaid : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *topicIDs;
@property (readonly, nonatomic) BOOL hasPublisherID;
@property (retain, nonatomic) NSString *publisherID;
@property (nonatomic) BOOL hasBodyTextLength;
@property (nonatomic) long long bodyTextLength;
@property (nonatomic) BOOL hasHasAudioTrack;
@property (nonatomic) BOOL hasAudioTrack;
@property (nonatomic) BOOL hasIsFeatured;
@property (nonatomic) BOOL isFeatured;
@property (nonatomic) BOOL hasIsANF;
@property (nonatomic) BOOL isANF;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) BOOL hasIsBundlePaid;
@property (nonatomic) BOOL isBundlePaid;
@property (nonatomic) BOOL hasHasVideo;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasIsAIGenerated;
@property (nonatomic) BOOL isAIGenerated;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) BOOL hasPublisherCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) BOOL hasPublisherConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasPublishDateMilliseconds;
@property (nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, nonatomic) BOOL hasPublisherTagMetadata;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) BOOL hasFloat16TitleEncoding;
@property (retain, nonatomic) NSData *float16TitleEncoding;
@property (readonly, nonatomic) BOOL hasFloat16FullBodyEncoding;
@property (retain, nonatomic) NSData *float16FullBodyEncoding;

+ (Class)topicsType;
+ (Class)topicIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTopics:(id)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;
- (void)addTopicIDs:(id)a0;
- (void)clearTopicIDs;
- (id)topicIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIDsCount;

@end
