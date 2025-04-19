@class NSArray, NSNumber, NSString;
@protocol BMBookmark;

@interface BMDSLStreamPublisher : BMDSL <BMDSLIdentifiable>

@property (retain, nonatomic) NSArray *backingEvents;
@property (retain, nonatomic) NSNumber *bookmarkingTime;
@property (readonly, nonatomic) id<BMBookmark> bookmark;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, nonatomic) Class eventDataClass;

+ (id)name;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isStreamIdentifierValid:(id)a0;
+ (BOOL)isStreamInfoValidForIdentifier:(id)a0 basePath:(id)a1 streamType:(unsigned long long)a2;
+ (BOOL)isStreamTypeInValidRange:(unsigned long long)a0;
+ (unsigned long long)streamTypeForDSLType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)bpsPublisher;
- (id)initRestrictedStreamWithBookmark:(id)a0 identifier:(id)a1;
- (id)initRestrictedStreamWithPublisher:(id)a0 identifier:(id)a1;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 name:(id)a2 version:(unsigned int)a3 streamType:(unsigned long long)a4 basePath:(id)a5;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 name:(id)a2 version:(unsigned int)a3 streamType:(unsigned long long)a4 basePath:(id)a5 eventDataClass:(Class)a6 useCase:(id)a7;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 privateStreamBasePath:(id)a2;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 privateStreamBasePath:(id)a2 eventDataClass:(Class)a3;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 startTime:(double)a2 privateStreamBasePath:(id)a3;
- (id)initWithBookmark:(id)a0 identifier:(id)a1 streamType:(unsigned long long)a2;
- (id)initWithIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 streamType:(unsigned long long)a1 eventDataClass:(Class)a2;
- (id)initWithIdentifier:(id)a0 streamType:(unsigned long long)a1 useCase:(id)a2;
- (id)initWithIdentifier:(id)a0 streamType:(unsigned long long)a1 useCase:(id)a2 eventDataClass:(Class)a3;
- (id)initWithPublisher:(id)a0 identifier:(id)a1 streamType:(unsigned long long)a2;
- (id)initWithStartTime:(double)a0 identifier:(id)a1 streamType:(unsigned long long)a2;
- (id)storeStream;
- (id)upstreams;

@end
