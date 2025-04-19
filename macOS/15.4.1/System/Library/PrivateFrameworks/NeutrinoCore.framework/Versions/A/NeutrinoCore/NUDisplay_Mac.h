@class NSString, NUPixelFormat, NUColorSpace;

@interface NUDisplay_Mac : NSObject <NUDisplay>

@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly) NUPixelFormat *pixelFormat;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displays;

- (id)init;
- (id)initWithDisplayID:(unsigned int)a0;

@end
