@class NSString;

@interface IOSurfaceDebugDescription : NSObject

@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSString *pixelFormatString;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long dirtySize;
@property (readonly) unsigned long long residentSize;
@property (readonly) NSString *name;

+ (id)surfaceDescriptions;

@end
