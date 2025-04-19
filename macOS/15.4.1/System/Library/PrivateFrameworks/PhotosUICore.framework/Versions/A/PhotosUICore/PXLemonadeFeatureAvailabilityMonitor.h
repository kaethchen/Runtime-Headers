@interface PXLemonadeFeatureAvailabilityMonitor : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxProgress;
    void /* unknown type, empty encoding */ feature;
    void /* unknown type, empty encoding */ __state;
    void /* unknown type, empty encoding */ __progress;
    void /* unknown type, empty encoding */ availabilityReporter;
    void /* unknown type, empty encoding */ highlightAnalysisStatus;
    void /* unknown type, empty encoding */ highlightAnalysisObservation;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ monitoringEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateInterval;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) unsigned long long stateChangedChangeDescriptor;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ observable;
@property (nonatomic) long long state;

- (id)init;
- (void).cxx_destruct;

@end
