@interface AppStoreKit.DiagnosticsReporter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ onReportError;
    void /* unknown type, empty encoding */ onReportIncident;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jsMetricsLogger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jsonMetricsLogger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_diagnosticsMetricsLogger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_validationMetricsLogger;
}

- (void)errorDidOccur:(id)a0;
- (void)incidentsDidOccur:(id)a0;

@end
