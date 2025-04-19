@interface KHProjectJournalEntryEntity : KHDBEntity

- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)loadModelFromResultSet:(id)a0;
- (void)persistModel:(id)a0;

@end
