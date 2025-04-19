@class NSHMDIOSurfaceSession, IOSurface;

@interface NSHMDIOSurfaceDrawable : NSObject {
    NSHMDIOSurfaceSession *_session;
    struct _SLSHMDDrawable { } *_drawable;
    double _inputTimestamp;
    double _presentedTime;
}

@property (readonly) NSHMDIOSurfaceSession *session;
@property (readonly) IOSurface *IOSurface;
@property double inputTimeStamp;
@property unsigned long long debugSignpost;
@property (readonly) double presentedTime;

- (void)dealloc;
- (id)initWithSession:(id)a0 SLSHMDDrawable:(struct _SLSHMDDrawable { } *)a1;
- (void)presentAtTimestamp:(double)a0;

@end
