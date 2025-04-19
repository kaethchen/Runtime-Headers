@class NSString;

@interface NSAccessibilityCustomChooser : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ itemSearchBlock;

- (void)dealloc;
- (id)initWithName:(id)a0 itemSearchBlock:(id /* block */)a1;

@end
