@class NSObject;
@protocol OS_dispatch_group, TSUReadChannel;

@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> *_accessGroup;
}

@property (readonly, nonatomic) int fileDescriptor;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFileDescriptor:(int)a0;
- (void)beginAccess;
- (void)endAccess;
- (void)waitForAccessToEnd;

@end
