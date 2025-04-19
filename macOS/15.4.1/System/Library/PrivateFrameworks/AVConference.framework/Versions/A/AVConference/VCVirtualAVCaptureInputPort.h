@class NSString, AVCaptureInput, VCWeakObjectHolder, NSMutableArray;

@interface VCVirtualAVCaptureInputPort : AVCaptureInputPort {
    VCWeakObjectHolder *_input;
    NSMutableArray *_connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (copy, nonatomic) NSString *mediaType;
@property (retain, nonatomic) AVCaptureInput *input;
@property (nonatomic) struct OpaqueCMClock { } *clock;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)disconnect;
- (id)connections;
- (void)addConnection:(id)a0;
- (id)initWithDevice:(id)a0 mediaType:(id)a1;

@end
