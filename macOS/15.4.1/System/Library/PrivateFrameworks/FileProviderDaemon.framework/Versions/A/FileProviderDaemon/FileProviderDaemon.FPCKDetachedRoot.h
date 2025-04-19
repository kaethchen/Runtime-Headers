@class NSURL;

@interface FileProviderDaemon.FPCKDetachedRoot : NSObject {
    void /* unknown type, empty encoding */ physicalLocation;
    void /* unknown type, empty encoding */ logicalLocation;
}

@property (nonatomic, readonly) NSURL *physicalLocation;
@property (nonatomic, readonly) NSURL *logicalLocation;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ inode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldRefreshBookmark;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhysicalLocation:(id)a0 rootURL:(id)a1 error:(id *)a2;

@end
