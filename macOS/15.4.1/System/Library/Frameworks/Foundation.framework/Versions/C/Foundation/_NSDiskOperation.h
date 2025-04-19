@class NSURL;

@interface _NSDiskOperation : NSObject {
    struct __DADisk { } *_disk;
    BOOL _eject;
    NSURL *_volumeURL;
}

- (void)dealloc;
- (id)description;

@end
