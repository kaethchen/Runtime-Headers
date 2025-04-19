@class NSArray;

@interface SFAnalyzerTranscriptionSegment : NSObject

@property (readonly, copy, nonatomic) NSArray *text;
@property (readonly, copy, nonatomic) NSArray *alternatives;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 alternatives:(id)a1 confidence:(double)a2;

@end
