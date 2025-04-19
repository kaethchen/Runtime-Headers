@interface AMLevelIndicator : NSLevelIndicator

+ (Class)cellClass;

- (void)awakeFromNib;
- (BOOL)isEditable;

@end
