@class NSString, NSArray, SHSyncedLyrics, NSDate;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long matchScore;
@property (readonly) float speedSkew;
@property (readonly) SHSyncedLyrics *syncedLyrics;
@property (readonly) NSDate *audioStartDate;
@property (readonly, copy) NSString *syncedLyricsSnippet;
@property (readonly) NSArray *signatureAlignments;
@property (readonly) float frequencySkew;
@property (readonly) double matchOffset;
@property (readonly) double predictedCurrentMatchOffset;
@property (readonly) float confidence;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)creationDate;
- (id)initWithProperties:(id)a0;
- (id)initWithMatchedMediaItemDictionary:(id)a0;
- (id)initWithMatchedMediaItemDictionary:(id)a0 syncedLyrics:(id)a1;

@end
