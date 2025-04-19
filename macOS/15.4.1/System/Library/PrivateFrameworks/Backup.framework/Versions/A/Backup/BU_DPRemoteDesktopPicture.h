@class NSObject, CALayerHost;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BU_DPRemoteDesktopPicture : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _displayID;
    unsigned int _context;
}

@property (retain, nonatomic) CALayerHost *desktopPictureLayer;

+ (void)queue:(id)a0 remoteDesktopPictureForDisplay:(unsigned int)a1 callback:(struct function<void (BU_DPRemoteDesktopPicture *)> { struct __value_func<void (BU_DPRemoteDesktopPicture *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fetchForDisplay:(unsigned int)a0 queue:(id)a1 andCallback:(struct function<void (BU_DPRemoteDesktopPicture *)> { struct __value_func<void (BU_DPRemoteDesktopPicture *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (BOOL)finishHostLayerSetup;

@end
