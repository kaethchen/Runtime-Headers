@interface SCROStealthBrailleDisplay : SCROBrailleDisplay

+ (id)displayWithDelegate:(id)a0;
+ (id)displayWithIOElement:(id)a0 driverIdentifier:(id)a1 delegate:(id)a2;

- (int)token;
- (void)_mainDisplayHandler:(id)a0;

@end
