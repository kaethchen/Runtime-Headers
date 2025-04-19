@class NSAccessibilityCustomChooserItemResult, NSString;

@interface NSAccessibilityCustomChooserSearchPredicate : NSObject

@property (retain, nonatomic) NSAccessibilityCustomChooserItemResult *currentItem;
@property (nonatomic) long long searchDirection;
@property (copy, nonatomic) NSString *filterText;

- (void)dealloc;

@end
