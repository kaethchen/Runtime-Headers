@class NSArray, NSString;

@interface _VZDiskImageFormat : NSObject {
    struct DiskImageFormat { void /* function */ **x0; } *_format;
}

@property (class, readonly) NSArray *supportedFormats;
@property (class, readonly) _VZDiskImageFormat *rawDiskImageFormat;

@property (readonly) NSString *identifier;
@property (readonly) BOOL canCreateFixedDiskImages;
@property (readonly) BOOL canCreateDynamicDiskImages;

- (id)createDynamicDiskImageWithURL:(id)a0 suggestedSize:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)createFixedDiskImageWithURL:(id)a0 suggestedSize:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
