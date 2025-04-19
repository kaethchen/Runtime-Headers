@class NSArray, IMKCandidateUIProperties;

@interface IMKCandidateGroupView : IMKUIView

@property (retain, nonatomic) NSArray *groupsWithPositions;
@property (retain, nonatomic) IMKCandidateUIProperties *UIProperties;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
