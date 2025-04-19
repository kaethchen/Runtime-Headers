@class NSNumber;

@interface ATXScoreNormalizationParameters : NSObject

@property (readonly, nonatomic) NSNumber *bufferSize;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBufferSize:(id)a0;
- (BOOL)isEqualToATXScoreNormalizationParameters:(id)a0;

@end
