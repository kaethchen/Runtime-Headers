@class FenceGroup, NSString;

@interface FenceGroupMember : NSObject <FenceGroupMember> {
    unsigned int _fenceGroupAcquisition;
    NSString *_senderDisplayName;
}

@property (retain) FenceGroup *fenceGroup;

- (void)dealloc;
- (id)description;
- (void)create:(id /* block */)a0;
- (void)acquireActiveRole:(unsigned int)a0 completion:(id /* block */)a1;
- (void)join:(unsigned int)a0 completion:(id /* block */)a1;
- (void)relinquishActiveRole:(unsigned int)a0;

@end
