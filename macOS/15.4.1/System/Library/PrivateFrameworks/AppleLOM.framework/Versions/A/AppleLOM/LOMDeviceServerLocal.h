@class LOMDeviceClientRemote;

@interface LOMDeviceServerLocal : LOMDeviceServer {
    LOMDeviceClientRemote *_device;
    BOOL _isLOMSupported;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)start;
- (id)initWithServiceName:(id)a0;
- (id)serialize;
- (BOOL)isSupported;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;

@end
