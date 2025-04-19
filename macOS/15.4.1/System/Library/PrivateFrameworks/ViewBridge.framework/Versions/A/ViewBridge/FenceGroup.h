@class FenceGroupMember, NSNumber;

@interface FenceGroup : NSObject {
    NSNumber *_fenceGroupID;
}

@property (weak) FenceGroupMember *activeMember;

+ (void)withFenceGroupsPerform:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)fenceGroupID;

@end
