@class NSSet;

@interface PKMentionQuery : PKDetectionQuery

@property (copy, nonatomic) NSSet *validSuffixes;

- (void)queryDidUpdateResult:(id)a0;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
