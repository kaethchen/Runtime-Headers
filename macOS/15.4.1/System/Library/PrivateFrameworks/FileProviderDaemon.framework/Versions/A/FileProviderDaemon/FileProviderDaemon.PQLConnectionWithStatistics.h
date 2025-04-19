@interface FileProviderDaemon.PQLConnectionWithStatistics : PQLConnection {
    void /* unknown type, empty encoding */ dbStatistics;
    void /* unknown type, empty encoding */ maxQueryExecutionTime;
}

- (id)init;
- (void).cxx_destruct;

@end
