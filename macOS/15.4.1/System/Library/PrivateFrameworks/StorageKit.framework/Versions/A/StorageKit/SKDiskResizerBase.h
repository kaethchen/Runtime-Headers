@class SKProgress, SKStateMachine, NSError, SKDisk;

@interface SKDiskResizerBase : NSObject

@property (nonatomic) unsigned long long originalSize;
@property (retain, nonatomic) SKDisk *disk;
@property (nonatomic) unsigned long long requestedSize;
@property (readonly, nonatomic) unsigned long long currentSize;
@property (retain, nonatomic) SKProgress *progress;
@property (nonatomic) long long completedUnitCount;
@property (retain, nonatomic) SKStateMachine *activeFSM;
@property (retain, nonatomic) NSError *resizeError;

- (void).cxx_destruct;
- (id)cancelWithError:(id *)a0;
- (id)rollbackResize:(id *)a0;
- (id)eventFromSize;
- (id)initWithDisk:(id)a0 requestedSize:(unsigned long long)a1;
- (id)resizeStateMachine:(id *)a0;
- (BOOL)resizeWithError:(id *)a0;

@end
