@class NSString, PAOpenGLDevice;

@interface PAGLObject : NSObject {
    PAOpenGLDevice *_device;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int objectID;
@property (readonly, nonatomic) PAOpenGLDevice *device;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)deleteIfNeeded;
- (void)_deleteOpenGLResourcesAsync;
- (void)createIfNeededWithContext:(id)a0;
- (void)deleteIfNeededWithContext:(id)a0;

@end
