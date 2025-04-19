@class NSString, NSDictionary, NSArray, NSURL, NSNumber;

@interface AutocorrectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSDictionary *sourceMetadata;
@property (retain, nonatomic) NSArray *touched;
@property (retain, nonatomic) NSArray *touchEvents;
@property (retain, nonatomic) NSDictionary *pathsForWords;
@property (retain, nonatomic) NSArray *inserted;
@property (retain, nonatomic) NSArray *predicted;
@property (retain, nonatomic) NSArray *inlineCompletions;
@property (retain, nonatomic) NSArray *corrected;
@property (retain, nonatomic) NSArray *intended;
@property (retain, nonatomic) NSArray *intendedTransliteration;
@property (retain, nonatomic) NSArray *input;
@property (retain, nonatomic) NSArray *documentStates;
@property (retain, nonatomic) NSNumber *numberOfTouches;
@property (retain, nonatomic) NSNumber *corpusId;
@property (retain, nonatomic) NSURL *typologyLogURL;
@property (retain, nonatomic) NSURL *typologyTraceLogURL;
@property (retain, nonatomic) NSString *seed;
@property (retain, nonatomic) NSDictionary *debugData;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSDictionary *aggdStatistics;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)extractDataFromTypingLog:(id)a0;
- (void)setTagsFromClassifiers:(id)a0;

@end
