@class NSString, NSDictionary, BKSHIDEventKeyCommandsDispatchingRule;

@interface _BKHIDKeyCommandDeliveryRoot : NSObject {
    NSString *_identifier;
    BKSHIDEventKeyCommandsDispatchingRule *_dispatchingRule;
    NSDictionary *_deliveryChainByIdentity;
}

- (void).cxx_destruct;

@end
