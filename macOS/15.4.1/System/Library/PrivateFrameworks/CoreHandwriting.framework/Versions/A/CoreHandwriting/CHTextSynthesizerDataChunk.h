@class NSString;

@interface CHTextSynthesizerDataChunk : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInOriginalString;
@property (retain, nonatomic) NSString *chunkValueOriginal;
@property (readonly, nonatomic) NSString *chunkValueForSynthesis;
@property (readonly, nonatomic) BOOL isNotDef;
@property (readonly, nonatomic) long long synthesisSuggestion;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compareByRangeWithDataChunk:(id)a0;
- (id)initWithChunkValueForSynthesis:(id)a0 originalValue:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 isNotDef:(BOOL)a3 synthesisSuggestion:(long long)a4;

@end
