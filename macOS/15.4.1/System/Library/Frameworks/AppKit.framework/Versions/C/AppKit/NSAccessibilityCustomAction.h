@class NSString;
@protocol NSObject;

@interface NSAccessibilityCustomAction : NSObject {
    id<NSObject> _target;
}

@property (copy) NSString *name;
@property (copy) id /* block */ handler;
@property (weak) id<NSObject> target;
@property SEL selector;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_accessibilityCustomActionIdentifier;
- (id)initWithName:(id)a0 handler:(id /* block */)a1;
- (id)initWithName:(id)a0 target:(id)a1 selector:(SEL)a2;

@end
