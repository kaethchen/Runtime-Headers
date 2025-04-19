@class QCCLContext;

@interface QCMemObject : QCResource {
    struct _cl_mem { } *_stream;
    int _status;
    struct _cl_device_id { } *_device;
    unsigned long long _flags;
    unsigned char _acquired : 1;
    void *_unused2[4];
}

@property (readonly) QCCLContext *context;
@property (readonly) struct _cl_mem **memObject;
@property struct _cl_event { } *event;
@property (readonly) unsigned long long byteSize;
@property (readonly) unsigned long long identifier;
@property (readonly) BOOL attached;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)endUpdateStream;
- (BOOL)acquireGLObject;
- (void)releaseGLObject;
- (BOOL)beginUpdateStream;
- (id)initWithContext:(id)a0 stream:(struct _cl_mem { } *)a1;

@end
