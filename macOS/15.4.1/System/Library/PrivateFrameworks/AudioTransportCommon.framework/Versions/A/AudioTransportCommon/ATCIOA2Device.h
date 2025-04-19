@class NSArray, NSString;

@interface ATCIOA2Device : NSObject

@property (copy, nonatomic) NSArray *inputStreams;
@property (copy, nonatomic) NSArray *outputStreams;
@property (copy, nonatomic) NSArray *availableSampleRates;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, nonatomic) unsigned int inputSafetyOffset;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, nonatomic) unsigned int outputSafetyOffset;
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic) unsigned int ioBufferSize;

+ (id)iokitMatchingDictionary;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (BOOL)changeToSampleRate:(double)a0 error:(id *)a1;
- (BOOL)startIOError:(id *)a0;
- (BOOL)stopIOError:(id *)a0;

@end
