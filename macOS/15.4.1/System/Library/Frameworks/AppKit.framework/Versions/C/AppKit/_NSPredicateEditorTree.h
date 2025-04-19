@class NSString, NSArray, NSPredicateEditorRowTemplate;

@interface _NSPredicateEditorTree : NSObject

@property (retain, nonatomic) NSPredicateEditorRowTemplate *template;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic) long long indexIntoTemplate;
@property (nonatomic) long long menuItemIndex;

- (void)dealloc;
- (id)description;

@end
