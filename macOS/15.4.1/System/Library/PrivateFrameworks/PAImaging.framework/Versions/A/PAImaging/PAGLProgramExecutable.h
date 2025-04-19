@class PAGLShader, PAOpenGLProgram, NSObject, PAGLGeometryShader;
@protocol OS_dispatch_queue;

@interface PAGLProgramExecutable : PAGLObject {
    NSObject<OS_dispatch_queue> *_queue;
    PAGLShader *_vertexShader;
    PAGLShader *_fragmentShader;
    PAGLGeometryShader *_geometryShader;
    BOOL _isCompiled;
    BOOL _isLinked;
    BOOL _isRunning;
}

@property (readonly, weak, nonatomic) PAOpenGLProgram *program;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (BOOL)load;
- (void).cxx_destruct;
- (BOOL)_isLoaded;
- (BOOL)_run:(id /* block */)a0;
- (void)_begin;
- (unsigned int)createWithContext:(id)a0;
- (BOOL)_loadIfNeeded;
- (int)_actualLocationForAttribute:(id)a0;
- (void)_attachShaders;
- (void)_bindAttributeLocations;
- (BOOL)_canRunInContext:(id)a0;
- (void)_compile;
- (BOOL)_compileIfNeeded;
- (void)_compileWithContext:(id)a0;
- (void)_end;
- (BOOL)_isValidLocation:(unsigned int)a0 forAttribute:(id)a1;
- (void)_link;
- (BOOL)_linkIfNeeded;
- (void)_linkProgram;
- (BOOL)_linkStatus;
- (void)_linkWithContext:(id)a0;
- (BOOL)_runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_validateAttributeLocations;
- (BOOL)canRunInContext:(id)a0;
- (id)initWithProgram:(id)a0 device:(id)a1;
- (id)instantiate;
- (BOOL)runInContext:(id)a0 usingBlock:(id /* block */)a1;

@end
