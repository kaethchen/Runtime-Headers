@interface IMAP2ConnectionControl.ConnectionPool : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logName;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ engineID;
    void /* unknown type, empty encoding */ didTearDown;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ nextConnectionID;
    void /* unknown type, empty encoding */ backoff;
    void /* unknown type, empty encoding */ backoffTimer;
    void /* unknown type, empty encoding */ backoffLoggingRateLimit;
    void /* unknown type, empty encoding */ checkForStallTimer;
    void /* unknown type, empty encoding */ lastError;
    void /* unknown type, empty encoding */ connectionStateDidChange;
    void /* unknown type, empty encoding */ stateCapture;
    void /* unknown type, empty encoding */ enqueuedEvents;
    void /* unknown type, empty encoding */ pendingCancel;
    void /* unknown type, empty encoding */ pendingCancelTimer;
    void /* unknown type, empty encoding */ collectDataTransferTimer;
    void /* unknown type, empty encoding */ dataTransferReportAccumulator;
    void /* unknown type, empty encoding */ nextCredentialsRequestID;
    void /* unknown type, empty encoding */ credentialsState;
}

@end
