@interface PKPassTextField : NSTextField

@property long long typeMask;

+ (Class)cellClass;

- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)mouseDownCanMoveWindow;

@end
