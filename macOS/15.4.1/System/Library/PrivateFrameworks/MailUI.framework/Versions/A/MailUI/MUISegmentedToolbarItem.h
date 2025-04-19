@class NSSegmentedControl;

@interface MUISegmentedToolbarItem : NSToolbarItem

@property (retain) NSSegmentedControl *view;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)sizeToFit;
- (void)validate;

@end
