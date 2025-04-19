@class NSString;

@interface CHTextSynthesizerInputChunk : NSObject {
    void /* unknown type, empty encoding */ chunkValueOriginal;
    void /* unknown type, empty encoding */ chunkValueForSynthesis;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ rangeInOriginalString;
@property (nonatomic, readonly) NSString *chunkValueOriginal;
@property (nonatomic, readonly) NSString *chunkValueForSynthesis;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isNotDef;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ suggestedSynthesizer;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
