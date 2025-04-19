@interface AMPRolloverTableCell : NSTableCellView

@property (nonatomic) BOOL rollover;

- (void)prepareForReuse;
- (id)propertyKeysForViewSpy;

@end
