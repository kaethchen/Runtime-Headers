@class NSAccessibilityCustomRotorItemResult, NSString;

@interface NSAccessibilityCustomRotorSearchParameters : NSObject

@property (retain) NSAccessibilityCustomRotorItemResult *currentItem;
@property long long searchDirection;
@property (copy) NSString *filterString;

- (void)dealloc;

@end
