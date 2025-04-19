@class HMSoftwareUpdateDescriptor;

@interface HMSoftwareUpdateDescriptorEvent : HMEEvent

@property (readonly) HMSoftwareUpdateDescriptor *descriptor;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithDescriptor:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
