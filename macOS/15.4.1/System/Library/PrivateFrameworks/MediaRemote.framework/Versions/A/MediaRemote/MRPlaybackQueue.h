@class NSData, NSString, NSArray, NSDictionary, NSSet, MRPlayerPath, _MRPlaybackQueueContextProtobuf;

@interface MRPlaybackQueue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic) long long location;
@property (nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property (copy, nonatomic) NSSet *homeUserIdentifiers;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *contentItemIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) NSString *minimalReadableDescription;
@property (readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)contentItemForIdentifier:(id)a0;
- (id)contentItemWithOffset:(unsigned long long)a0;
- (id)initWithContentItem:(id)a0;
- (id)initWithContentItems:(id)a0;
- (id)initWithContentItems:(id)a0 location:(unsigned long long)a1;
- (id)initWithContentItems:(id)a0 location:(unsigned long long)a1 withPropertiesFromPlaybackQueue:(id)a2;
- (id)initWithContentItems:(id)a0 withPropertiesFromPlaybackQueue:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (void)mergePropertiesFromPlaybackQueue:(id)a0;
- (id)protobufWithEncoding:(long long)a0;

@end
