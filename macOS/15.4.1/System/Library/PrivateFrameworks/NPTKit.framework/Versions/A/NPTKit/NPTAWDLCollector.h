@class CWFInterface, NSMutableDictionary, NSString;

@interface NPTAWDLCollector : NSObject <NPTMetadataCollection>

@property (retain, nonatomic) CWFInterface *interface;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;

- (void).cxx_destruct;
- (id)awdlOpModeString;
- (id)fetchAWDLData;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void)stopCollecting;

@end
