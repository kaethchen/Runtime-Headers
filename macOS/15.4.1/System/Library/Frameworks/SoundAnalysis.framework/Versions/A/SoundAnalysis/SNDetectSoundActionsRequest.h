@class NSArray;

@interface SNDetectSoundActionsRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) long long hopSizeSamples;
@property (nonatomic) long long blocksBetweenTriggers;
@property (nonatomic, copy) NSArray *commands;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 dictionary:(id)a1 error:(id *)a2;

@end
