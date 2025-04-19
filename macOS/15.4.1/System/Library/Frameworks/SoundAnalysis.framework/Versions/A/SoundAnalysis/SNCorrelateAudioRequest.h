@interface SNCorrelateAudioRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic) double overlapFactor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAudioFile:(id)a0;
- (id)initWithAudioFile:(id)a0 overlapFactor:(double)a1;

@end
