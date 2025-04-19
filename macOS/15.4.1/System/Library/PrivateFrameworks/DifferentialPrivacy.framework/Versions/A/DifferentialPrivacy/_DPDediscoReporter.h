@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)a0;

- (id)directlyUploadDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (BOOL)reportDediscoKeys:(id)a0 storage:(id)a1;
- (BOOL)reportDediscoRecords:(id)a0;
- (id)reportToDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
