@interface FCModifyTagSettingsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithTagSettingsEntries:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
