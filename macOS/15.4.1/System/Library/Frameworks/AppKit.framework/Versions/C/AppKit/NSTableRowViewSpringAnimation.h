@interface NSTableRowViewSpringAnimation : NSSpringAnimation

@property double startPercentage;
@property double endPercentage;
@property (readonly) double percentage;

- (id)initWithDuration:(double)a0;

@end
