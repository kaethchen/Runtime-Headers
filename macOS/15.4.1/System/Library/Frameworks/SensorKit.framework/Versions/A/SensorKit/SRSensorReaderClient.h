@class SRReaderSensorKitBackend;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading> {
    SRReaderSensorKitBackend *_reader;
}

- (void).cxx_destruct;
- (void)resetDatastoreFiles:(id)a0;

@end
