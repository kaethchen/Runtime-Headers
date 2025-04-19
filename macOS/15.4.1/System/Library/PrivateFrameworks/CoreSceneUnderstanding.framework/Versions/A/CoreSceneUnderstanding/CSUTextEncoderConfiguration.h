@class NSArray, CSUTextEncoderE5MLConfiguration, CSUSystemSearchTextEncoderV1Configuration;

@interface CSUTextEncoderConfiguration : NSObject

@property (retain, nonatomic) NSArray *availableContextLengths;
@property (nonatomic) unsigned long long contextLength;
@property (retain, nonatomic) CSUSystemSearchTextEncoderV1Configuration *systemSearchTextEncoderConfig;
@property (retain, nonatomic) CSUTextEncoderE5MLConfiguration *textEncoderE5MLConfig;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *additionalLayerNames;
@property (readonly, nonatomic) unsigned long long tokenEmbeddingLength;

+ (id)availableContextLengthsForRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)createForRevision:(long long)a0 error:(id *)a1;
+ (id)defaultContextLengthForRevision:(long long)a0;

- (void).cxx_destruct;
- (id)initSystemSearchTextEncoderV1:(id)a0 forRevision:(long long)a1;
- (id)initTextEncoderE5ML:(id)a0 forRevision:(long long)a1;
- (void)setAdditionalLayerNames:(id)a0;

@end
