@class NSString;

@interface SequenceAlignment : NSObject

@property (readonly) NSString *firstSequence;
@property (readonly) NSString *secondSequence;
@property (readonly) NSString *shorterSequence;
@property (readonly) NSString *longerSequence;
@property (readonly) NSString *alignedFirstSequence;
@property (readonly) NSString *alignedSecondSequence;
@property (readonly) NSString *alignedShorterSequence;
@property (readonly) long long alignmentScore;
@property (readonly) double normalizedAlignmentScore;

- (void)dealloc;
- (void)setAlignmentScore:(long long)a0;
- (id)initWithFirstSequence:(id)a0 secondSequence:(id)a1;
- (void)setAlignedFirstSequence:(id)a0;
- (void)setAlignedSecondSequence:(id)a0;

@end
