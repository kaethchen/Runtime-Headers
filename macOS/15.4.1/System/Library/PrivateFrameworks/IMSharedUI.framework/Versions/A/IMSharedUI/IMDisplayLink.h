@class NSArray;

@interface IMDisplayLink : NSObject

@property (copy, nonatomic) NSArray *displays;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
+ (Class)_displayLinkClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)schedule;
- (void)_displayLinkCallback;

@end
