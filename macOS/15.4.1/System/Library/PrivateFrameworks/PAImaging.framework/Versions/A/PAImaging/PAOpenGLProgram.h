@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAOpenGLProgram : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_executables;
}

@property (copy, nonatomic) NSString *vertexShaderSource;
@property (copy, nonatomic) NSString *fragmentShaderSource;
@property (copy, nonatomic) NSString *geometryShaderSource;
@property (nonatomic) unsigned int geometryVertexOutCount;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)_executableForDevice:(id)a0;
- (void)_forEachAttribute:(id /* block */)a0;
- (unsigned int)_locationForAttribute:(id)a0;
- (id)_lookupExecutableForDevice:(id)a0;
- (id)_newExecutableForDevice:(id)a0;
- (void)_setExecutable:(id)a0 forDevice:(id)a1;
- (void)_setLocation:(unsigned int)a0 forAttribute:(id)a1;
- (void)forEachAttribute:(id /* block */)a0;
- (id)instantiateOnDevice:(id)a0;
- (unsigned int)locationForAttribute:(id)a0;
- (void)setLocation:(unsigned int)a0 forAttribute:(id)a1;

@end
