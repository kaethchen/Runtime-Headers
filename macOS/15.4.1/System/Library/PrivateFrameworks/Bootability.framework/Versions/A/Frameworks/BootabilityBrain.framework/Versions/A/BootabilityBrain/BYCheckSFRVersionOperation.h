@interface BYCheckSFRVersionOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (id)_currentRestoreVersion;
- (id)_targetRestoreVersion;

@end
