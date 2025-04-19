@class NSString;

@interface IOAccelMemorySurfaceInfo : NSObject {
    id _expansionData;
}

@property unsigned int surfaceID;
@property unsigned int width;
@property unsigned int height;
@property (retain) NSString *pixelFormat;
@property (retain) NSString *surfaceBuffer;

- (void)dealloc;

@end
