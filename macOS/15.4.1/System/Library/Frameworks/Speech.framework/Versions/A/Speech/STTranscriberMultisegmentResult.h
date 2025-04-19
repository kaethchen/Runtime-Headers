@class NSArray, NSString;

@interface STTranscriberMultisegmentResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSArray *transcriptions;
@property (readonly, nonatomic) unsigned long long earResultType;
@property (readonly, copy, nonatomic) NSArray *nBestChoices;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } recognitionAudioRange;
@property (readonly, copy, nonatomic) NSString *bestFormattedString;
@property (readonly, nonatomic) double bestFormattedStringSegmentConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSegments:(id)a0 transcriptions:(id)a1 earResultType:(unsigned long long)a2 nBestChoices:(id)a3 recognitionAudioRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 bestFormattedString:(id)a5 bestFormattedStringSegmentConfidence:(double)a6;

@end
