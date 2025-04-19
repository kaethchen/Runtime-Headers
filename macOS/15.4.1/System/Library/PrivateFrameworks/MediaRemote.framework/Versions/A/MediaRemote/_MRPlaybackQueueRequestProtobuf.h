@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char artworkHeight : 1; unsigned char artworkWidth : 1; unsigned char cachingPolicy : 1; unsigned char length : 1; unsigned char location : 1; unsigned char includeAlignments : 1; unsigned char includeAvailableArtworkFormats : 1; unsigned char includeInfo : 1; unsigned char includeLanguageOptions : 1; unsigned char includeLyrics : 1; unsigned char includeMetadata : 1; unsigned char includeParticipants : 1; unsigned char includeSections : 1; unsigned char isLegacyNowPlayingInfoRequest : 1; unsigned char returnContentItemAssetsInUserCompletion : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) int length;
@property (nonatomic) BOOL hasIncludeMetadata;
@property (nonatomic) BOOL includeMetadata;
@property (nonatomic) BOOL hasArtworkWidth;
@property (nonatomic) double artworkWidth;
@property (nonatomic) BOOL hasArtworkHeight;
@property (nonatomic) double artworkHeight;
@property (nonatomic) BOOL hasIncludeLyrics;
@property (nonatomic) BOOL includeLyrics;
@property (nonatomic) BOOL hasIncludeSections;
@property (nonatomic) BOOL includeSections;
@property (nonatomic) BOOL hasIncludeInfo;
@property (nonatomic) BOOL includeInfo;
@property (nonatomic) BOOL hasIncludeLanguageOptions;
@property (nonatomic) BOOL includeLanguageOptions;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *contentItemIdentifiers;
@property (nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) BOOL returnContentItemAssetsInUserCompletion;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasCachingPolicy;
@property (nonatomic) int cachingPolicy;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest;
@property (nonatomic) BOOL isLegacyNowPlayingInfoRequest;
@property (nonatomic) BOOL hasIncludeParticipants;
@property (nonatomic) BOOL includeParticipants;
@property (nonatomic) BOOL hasIncludeAvailableArtworkFormats;
@property (nonatomic) BOOL includeAvailableArtworkFormats;
@property (retain, nonatomic) NSMutableArray *requestedArtworkFormats;
@property (retain, nonatomic) NSMutableArray *requestedRemoteArtworkFormats;
@property (nonatomic) BOOL hasIncludeAlignments;
@property (nonatomic) BOOL includeAlignments;

+ (Class)contentItemIdentifiersType;
+ (Class)requestedArtworkFormatsType;
+ (Class)requestedRemoteArtworkFormatsType;

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
- (id)requestedArtworkFormatsAtIndex:(unsigned long long)a0;
- (void)addContentItemIdentifiers:(id)a0;
- (void)addRequestedArtworkFormats:(id)a0;
- (void)addRequestedRemoteArtworkFormats:(id)a0;
- (void)clearContentItemIdentifiers;
- (void)clearRequestedArtworkFormats;
- (void)clearRequestedRemoteArtworkFormats;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentItemIdentifiersCount;
- (unsigned long long)requestedArtworkFormatsCount;
- (id)requestedRemoteArtworkFormatsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestedRemoteArtworkFormatsCount;

@end
