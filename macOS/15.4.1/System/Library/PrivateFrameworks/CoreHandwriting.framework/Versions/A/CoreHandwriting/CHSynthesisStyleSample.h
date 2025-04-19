@class NSSet, NSString, NSDate, CHDrawing;

@interface CHSynthesisStyleSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } embeddingVector;
@property (nonatomic) long long script;
@property (nonatomic) long long creationTimestep;
@property (nonatomic) long long samplingCount;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) CHDrawing *drawing;
@property (readonly, nonatomic) NSString *transcription;

+ (id)normalizeDrawing:(id)a0 transcription:(id)a1;
+ (id)characterCoverageWithString:(id)a0;
+ (float)cosineSimilarityBetweenFirstVector:(const void *)a0 secondVector:(const void *)a1;
+ (float)distanceBetweenFirstVector:(const void *)a0 secondVector:(const void *)a1;
+ (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })floatArrayToVector:(id)a0;
+ (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })floatMultiArrayToVector:(id)a0;
+ (id)floatVectorToArray:(void *)a0;
+ (double)normalizationTextHeight;
+ (id)normalizeStyleSample:(id)a0;
+ (void)normalizeVector:(void *)a0;
+ (id)sampleWithTranscription:(id)a0 drawing:(id)a1 script:(long long)a2 strokeIdentifiers:(id)a3;
+ (id)sampleWithTranscription:(id)a0 drawing:(id)a1 script:(long long)a2 strokeIdentifiers:(id)a3 embeddingVector:(const void *)a4;
+ (long long)shiftTimestep:(long long)a0 offset:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)characterCoverage;
- (void)clearEmbeddingVector;
- (float)cosineSimilarityToSample:(id)a0;
- (float)distanceToSample:(id)a0;
- (BOOL)hasEmbeddingVector;
- (void)incrementSamplingCount;
- (id)initWithTranscription:(id)a0 drawing:(id)a1 script:(long long)a2 strokeIdentifiers:(id)a3 embeddingVector:(const void *)a4;
- (void)shiftTimestepsByOffset:(long long)a0;
- (void)updateStyleEmbedding:(id)a0 script:(long long)a1;

@end
