@interface PhotosIntelligence.MemoryCreationAvailabilityMonitor : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ _listeners;
    void /* unknown type, empty encoding */ _polling;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ updateTimer;
    void /* unknown type, empty encoding */ _gmsAvailabilityNotifications;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ processingAvailabilityReporter;
    void /* unknown type, empty encoding */ _processingAvailability;
}

+ (BOOL)shouldShowMemoryCreationInWhatsNew;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
