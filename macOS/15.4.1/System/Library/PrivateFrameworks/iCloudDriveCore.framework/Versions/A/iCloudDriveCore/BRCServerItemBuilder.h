@protocol BRCZoneAppRetriever;

@interface BRCServerItemBuilder : NSObject {
    id<BRCZoneAppRetriever> _zoneAppRetriever;
}

- (void).cxx_destruct;
- (id)initWithZoneAppRetriever:(id)a0;
- (id)newServerItemFromPQLResultSet:(id)a0 error:(id *)a1;

@end
