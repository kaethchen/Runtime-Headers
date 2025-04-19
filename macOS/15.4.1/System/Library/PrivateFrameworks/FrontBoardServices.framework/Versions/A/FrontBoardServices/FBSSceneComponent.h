@class NSString;
@protocol FBSComponentScene;

@interface FBSSceneComponent : NSObject <FBSSceneComponent> {
    id<FBSComponentScene> _scene;
    BOOL _invalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithScene:(id)a0;
- (id)scene;
- (void)setScene:(id)a0;
- (id)clientScene;
- (id)hostScene;

@end
