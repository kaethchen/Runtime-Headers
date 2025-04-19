@interface CNCDLabelMigrator : CNCDMigrator

+ (id)log;

- (void)migrate;
- (void)migrateLabels;
- (void)updateLabelsForEntityNamed:(id)a0 fromLabel:(id)a1 toLabel:(id)a2;

@end
