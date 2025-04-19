@class BKSHIDEventDispatchingTarget, NSString, NSArray, BKSEventDeferringChainIdentity, BKSHIDEventSenderDescriptor;

@interface BKEventDeliveryChain : NSObject <BSDescriptionStreamable> {
    BKSEventDeferringChainIdentity *_identity;
    BKSHIDEventDispatchingTarget *_dispatchTarget;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
    NSArray *_deferringPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;

@end
