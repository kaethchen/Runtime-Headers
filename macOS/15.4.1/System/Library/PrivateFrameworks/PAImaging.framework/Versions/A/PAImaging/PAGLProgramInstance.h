@class PAGLProgramExecutable, NSMutableDictionary;

@interface PAGLProgramInstance : NSObject {
    NSMutableDictionary *_uniforms;
    BOOL _isRunning;
}

@property (readonly, nonatomic) PAGLProgramExecutable *program;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProgram:(id)a0;
- (BOOL)_setAllUserDefinedUniformValues;
- (BOOL)_canRunInContext:(id)a0;
- (BOOL)_checkAllUserDefinedUniformsAreSet;
- (BOOL)_checkWillBeAccelerated:(id)a0;
- (int)_getUniformLocation:(id)a0;
- (BOOL)_runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_setUniform:(id)a0 withValue:(id)a1;
- (BOOL)runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)runWithBlock:(id /* block */)a0 context:(id)a1;
- (void)setValue:(id)a0 forUniform:(id)a1;
- (id)valueForUniform:(id)a0;

@end
