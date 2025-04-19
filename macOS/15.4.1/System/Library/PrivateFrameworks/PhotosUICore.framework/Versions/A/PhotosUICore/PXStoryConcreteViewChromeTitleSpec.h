@interface PXStoryConcreteViewChromeTitleSpec : NSObject <PXStoryViewChromeTitleSpec>

@property (readonly, nonatomic) long long numberOfTitleLines;
@property (readonly, nonatomic) long long numberOfSubtitleLines;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (readonly, nonatomic) BOOL hidden;

- (id)init;
- (id)initWithNumberOfTitleLines:(long long)a0 numberOfSubtitleLines:(long long)a1 configuration:(id)a2;

@end
