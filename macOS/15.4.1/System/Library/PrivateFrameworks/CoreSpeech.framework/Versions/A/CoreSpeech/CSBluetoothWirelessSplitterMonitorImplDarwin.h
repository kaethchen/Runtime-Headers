@interface CSBluetoothWirelessSplitterMonitorImplDarwin : CSBluetoothWirelessSplitterMonitor {
    unsigned long long _splitterState;
    BOOL _shouldDisableSpeakerVerificationInSplitterMode;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)_notifyObserver:(id)a0 splitterState:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;

@end
