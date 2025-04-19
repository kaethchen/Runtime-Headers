@interface SKGlobalSharedContextRegistry : NSObject

+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (void)setGlobalGLSharedContext:(id)a0;
+ (void)setGlobalMetalDevice:(id)a0;
+ (void)setPrefersOpenGL:(BOOL)a0;
+ (BOOL)getPrefersOpenGL;

@end
