@class NSView;
@protocol NSObject;

@interface _NSViewGeometryInWindowDidChangeObserver : NSObject

@property (readonly, weak, nonatomic) NSView *view;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) id<NSObject> observer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 block:(id /* block */)a1;

@end
