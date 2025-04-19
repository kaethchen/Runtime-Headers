@class FSFileHandle;

@interface FSItem : NSObject

@property (retain) FSFileHandle *fileHandle;
@property (nonatomic) long long type;

- (id)init;
- (void).cxx_destruct;

@end
