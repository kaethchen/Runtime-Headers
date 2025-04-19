@class NSArray, MRGroupTopologyModificationRequest;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage {
    MRGroupTopologyModificationRequest *_request;
}

@property (readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *settingOutputDeviceUIDs;
@property (readonly, nonatomic) MRGroupTopologyModificationRequest *request;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithRequest:(id)a0;
- (unsigned int)contextType;

@end
