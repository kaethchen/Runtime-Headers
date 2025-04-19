@class NSString, NSArray;

@interface VKCElementCollection : VKCBaseElement

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *_children;

+ (id)collectionWithTitle:(id)a0 children:(id)a1 parent:(id)a2;
+ (id)collectionWithTitle:(id)a0 elementInfoText:(id)a1 parent:(id)a2;

- (void).cxx_destruct;
- (id)stringValue;
- (id)children;

@end
