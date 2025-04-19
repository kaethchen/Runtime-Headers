@class NSString;

@interface NSAccessibilityActionEntry : NSObject

@property (readonly, copy) NSString *action;
@property (readonly, copy) id /* block */ handler;
@property (readonly, copy) NSString *accessibilityDescription;

+ (id)entryWithName:(id)a0 description:(id)a1 handler:(id /* block */)a2;

- (void)dealloc;
- (id)initWithName:(id)a0 description:(id)a1 handler:(id /* block */)a2;

@end
