@class NSArray, NSString;

@interface ILMediaBrowserObjectSearchAndSelectionState : NSObject

@property (copy) NSArray *searchKeys;
@property (copy) NSString *searchString;

- (void)dealloc;
- (id)findMatchingMenuItemInSearchMenu:(id)a0;

@end
