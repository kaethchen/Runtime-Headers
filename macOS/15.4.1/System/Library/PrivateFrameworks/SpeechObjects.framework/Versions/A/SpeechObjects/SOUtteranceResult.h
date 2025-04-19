@class NSString, NSArray;

@interface SOUtteranceResult : NSObject

@property (retain) NSString *type;
@property double startTime;
@property double endTime;
@property (retain) NSString *text;
@property (retain) NSArray *textVariants;
@property (retain) NSString *commandIdentifier;
@property double prependedSilenceDuration;
@property (retain) NSString *audioFilePath;
@property double creationDate;

- (id)_initWithDictionary:(id)a0;
- (id)_dictionary;
- (void)_normalizeTimesAgainstTimeInterval:(double)a0;
- (id)initWithType:(id)a0 startTime:(double)a1 endTime:(double)a2 text:(id)a3 textVariants:(id)a4 commandIdentifier:(id)a5;

@end
