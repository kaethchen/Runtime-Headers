@class NSXPCConnection;

@interface WallpaperUtils : NSObject

@property (retain) NSXPCConnection *connectionToService;

+ (id)shared;

- (void).cxx_destruct;
- (id)connection;
- (void)copyItemAtPath:(id)a0 toPath:(id)a1;
- (void)removeItemsAtPath:(id)a0;

@end
