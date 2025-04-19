@class NSString;
@protocol FBSWorkspaceServiceTarget;

@interface FBSWorkspaceService : NSObject {
    id<FBSWorkspaceServiceTarget> _target;
    NSString *_identifier;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithTarget:(id)a0 identifier:(id)a1;
- (id)createScene:(id /* block */)a0;
- (id)createScene:(id /* block */)a0 completion:(id /* block */)a1;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)sendActions:(id)a0;
- (void)sendActions:(id)a0 completion:(id /* block */)a1;

@end
