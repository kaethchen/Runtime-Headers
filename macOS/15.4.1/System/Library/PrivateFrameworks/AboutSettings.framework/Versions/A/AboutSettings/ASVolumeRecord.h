@class NSUUID, NSImage, NSString;

@interface ASVolumeRecord : NSObject

@property (readonly) NSUUID *id;
@property (readonly) NSImage *image;
@property (readonly) BOOL isBootVolume;
@property (readonly) NSString *name;
@property (readonly) NSString *sizeAvailable;
@property (readonly) NSString *sizeTotal;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
