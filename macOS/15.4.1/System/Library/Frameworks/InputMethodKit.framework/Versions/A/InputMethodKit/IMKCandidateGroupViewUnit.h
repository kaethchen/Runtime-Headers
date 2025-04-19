@class NSString;

@interface IMKCandidateGroupViewUnit : NSObject

@property (nonatomic) double position;
@property (copy, nonatomic) NSString *title;

+ (id)groupViewUnitWithTitle:(id)a0 position:(double)a1;

- (void)dealloc;

@end
