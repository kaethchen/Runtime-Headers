@class NSString;

@interface QLThumbnailIOSurfaceGenerator : NSObject <QLThumbnailHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)ioSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;

@end
