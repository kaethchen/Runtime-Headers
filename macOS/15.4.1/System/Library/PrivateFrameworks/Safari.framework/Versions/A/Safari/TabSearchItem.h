@class NSString;

@interface TabSearchItem : NSObject

@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic) NSString *title;

+ (id)itemWithTitle:(id)a0;
+ (id)itemWithRepresentedObject:(id)a0;

- (void).cxx_destruct;

@end
