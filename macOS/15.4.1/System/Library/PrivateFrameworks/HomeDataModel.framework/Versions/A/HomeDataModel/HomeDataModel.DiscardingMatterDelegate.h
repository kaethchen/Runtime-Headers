@interface HomeDataModel.DiscardingMatterDelegate : NSObject <MTRDeviceDelegate>

- (id)init;
- (void).cxx_destruct;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;

@end
