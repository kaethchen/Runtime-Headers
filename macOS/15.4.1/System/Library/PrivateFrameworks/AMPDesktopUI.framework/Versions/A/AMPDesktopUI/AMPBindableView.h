@class NSMutableArray;

@interface AMPBindableView : NSView

@property (retain, nonatomic) NSMutableArray *bindings;

- (void)dealloc;
- (void).cxx_destruct;
- (void)bindObject:(id)a0 property:(id)a1 toKeyPath:(id)a2;
- (void)bindObject:(id)a0 property:(id)a1 toKeyPath:(id)a2 nilPlaceholder:(id)a3;
- (id)propertiesForViewSpy;

@end
