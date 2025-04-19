@interface FileProviderDaemon.PersistenceCounters : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ jobsWaitingForPersistence;
    void /* unknown type, empty encoding */ jobsNeedingFlushRunning;
    void /* unknown type, empty encoding */ fsJobsNeedingFlushWaitingForFlush;
    void /* unknown type, empty encoding */ fpJobsNeedingFlushWaitingForFlush;
    void /* unknown type, empty encoding */ fsIngestionWaitingForFlush;
    void /* unknown type, empty encoding */ fpIngestionWaitingForFlush;
    void /* unknown type, empty encoding */ isStarving;
}

@end
