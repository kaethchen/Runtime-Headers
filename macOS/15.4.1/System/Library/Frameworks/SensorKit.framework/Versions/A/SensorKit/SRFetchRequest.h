@class SRCursor, SRDevice;

@interface SRFetchRequest : NSObject

@property (retain, nonatomic) SRCursor *_cursor;
@property double from;
@property double to;
@property (retain) SRDevice *device;

- (void)dealloc;
- (id)init;

@end
