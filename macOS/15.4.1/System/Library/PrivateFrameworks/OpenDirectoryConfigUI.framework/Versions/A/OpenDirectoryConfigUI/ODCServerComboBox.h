@class NSString;

@interface ODCServerComboBox : XSBonjourComboBox

@property (copy) NSString *dhcpServerName;

- (void)dealloc;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (long long)numberOfItemsInComboBox:(id)a0;

@end
