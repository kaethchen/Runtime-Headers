@class NSValue, NSString, NSObject;

@interface VFXUIBindableView : NSView {
    NSObject *observer;
    NSString *observedKeyPath;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, nonatomic) NSValue *value;

- (void).cxx_destruct;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)triggerBindings;

@end
