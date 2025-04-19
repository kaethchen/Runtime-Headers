@class MRRenderer, NSString, MCAction, NSMutableDictionary, MRLayer, NSInvocation;

@interface MRAction : NSObject {
    NSInvocation *_invocation;
    id /* block */ _block;
    MRRenderer *_renderer;
}

@property (readonly) MCAction *mcAction;
@property (retain, nonatomic) id sender;
@property (copy, nonatomic) NSString *targetPath;
@property (retain, nonatomic) MRLayer *resolvedTarget;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (nonatomic) double time;
@property (retain) id specificObject;

- (void)dealloc;
- (id)description;
- (double)invoke;
- (void)check;
- (void)_resolveTargetPath:(id)a0;
- (id)initWithAction:(id)a0 andTarget:(id)a1;
- (id)initWithAction:(id)a0 inRenderer:(id)a1;
- (id)initWithBlock:(id /* block */)a0 andSender:(id)a1;
- (id)initWithSelector:(SEL)a0 sender:(id)a1 andTargetPath:(id)a2 inRenderer:(id)a3;

@end
