@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *phrases;
@property (readonly, copy, nonatomic) NSArray *utterances;
@property (readonly, nonatomic) double processedAudioDuration;

+ (id)tokenListFromUtterance:(id)a0 phrases:(id)a1;
+ (id)fakeOneBestFromPhrases:(id)a0;
+ (id)transcriptFromTokens:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPhrases:(id)a0 utterances:(id)a1 processedAudioDuration:(double)a2;
- (id)nBestTokenLists;
- (id)aceRecognition;
- (double)averageOneBestConfidenceScore;
- (id)initWithPhrases:(id)a0;
- (id)initWithPhrases:(id)a0 utterances:(id)a1;
- (id)nBestTokenListsFromSausage;
- (id)nBestTokenListsLossless;
- (id)nBestTranscripts;
- (id)oneBestTokenList;
- (id)oneBestTranscript;

@end
