@class FTPronGuessResponse, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutablePronGuessStreamingResponse : FTPronGuessStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setContent:(id)a0;

@end
