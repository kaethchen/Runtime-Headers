@class NSNetServiceBrowser, NSString, NSMutableDictionary, NSMutableArray, NSMultiReadUniWriteLock;

@interface XSBonjourComboBox : NSComboBox <NSNetServiceBrowserDelegate, NSNetServiceDelegate, NSComboBoxDataSource, NSCoding> {
    BOOL _isBrowsing;
    NSMultiReadUniWriteLock *_hostNamesForAddressesLock;
    NSMutableDictionary *_hostNamesForAddresses;
}

@property (retain) NSNetServiceBrowser *netServiceBrowser;
@property (retain) NSMutableArray *netServices;
@property (retain) NSString *serviceType;
@property BOOL displayResolvedAddresses;
@property (nonatomic) BOOL displaysResolvedAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)startBrowsing:(id)a0;
- (id)discoveredNetServices;
- (id)discoveredServiceNames;
- (id)ipV4AddressStringFromAddressData:(id)a0;
- (id)resolvedHostNameForNetService:(id)a0;
- (id)selectedNetService;
- (id)selectedServiceName;
- (void)sortAndReloadResolvedData;
- (void)stopBrowsing:(id)a0;
- (void)threadedGetBestHostNameFromAddresses:(id)a0;

@end
