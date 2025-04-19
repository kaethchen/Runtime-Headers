@class NSDictionary, FCCKPrivateDatabaseVersionMapping, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {
    FCCKPrivateDatabaseVersionMapping *_zoneNameVersionMapping;
    FCCKPrivateDatabaseVersionMapping *_recordTypeVersionMapping;
    FCCKPrivateDatabaseVersionMapping *_recordNameVersionMapping;
    NSDictionary *_zoneSchemasByName;
    NSArray *_defaultZoneSchemas;
    NSDictionary *_recordSchemasByType;
}

- (id)init;
- (void).cxx_destruct;

@end
