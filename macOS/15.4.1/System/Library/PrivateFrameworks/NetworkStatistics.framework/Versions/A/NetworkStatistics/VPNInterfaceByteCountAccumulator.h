@interface VPNInterfaceByteCountAccumulator : NSObject {
    struct accumulator_bytes { unsigned long long rxCellularBytes; unsigned long long rxWiFiBytes; unsigned long long rxWiredBytes; unsigned long long rxCompanionLinkBluetoothBytes; unsigned long long txCellularBytes; unsigned long long txWiFiBytes; unsigned long long txWiredBytes; unsigned long long txCompanionLinkBluetoothBytes; } _currentVPNInterfaceByteCounts;
}

- (id)init;
- (void)addBytesToAttributeToVPNProviderFromSnapshot:(id)a0;
- (void)subtractBytesAttributedToVPNProviderFromSnapshot:(id)a0;

@end
