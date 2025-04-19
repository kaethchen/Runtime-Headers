@class NSLock, NSMutableDictionary;

@interface MRShaderManager : NSObject {
    NSMutableDictionary *mGLShadersPerContext;
    NSMutableDictionary *mShadersPerContext;
    NSMutableDictionary *mShaderDescriptions;
    NSLock *mGLShadersPerContextLock;
    NSLock *mShadersPerContextLock;
}

+ (void)initialize;
+ (id)sharedManager;
+ (id)shaderKeyForShaderID:(id)a0 andArguments:(id)a1;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)releaseResources;
- (unsigned int)_glShaderForID:(id)a0 inBaseContext:(id)a1 isFragmentShader:(BOOL)a2 withArguments:(id)a3;
- (void)forgetContext:(id)a0;
- (void)registerShaderWithFragmentShaderSource:(id)a0 andVertexShaderName:(id)a1 forShaderID:(id)a2;
- (void)registerVertexShaderWithVertexShaderSource:(id)a0 forShaderID:(id)a1;
- (id)shaderForShaderID:(id)a0 inContext:(id)a1 withArguments:(id)a2;

@end
