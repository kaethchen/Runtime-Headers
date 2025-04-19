@interface AVB17221AECPAEMGetCountersResponse : AVB17221AECPAEMDescriptorMessage

+ (id)commandMessage;

- (id)init;
- (unsigned int)counterAtIndex:(int)a0;
- (BOOL)counterValidAtIndex:(int)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setCounter:(unsigned int)a0 atIndex:(int)a1;
- (void)setCounterValid:(BOOL)a0 atIndex:(int)a1;

@end
