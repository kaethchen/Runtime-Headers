@interface BYCommitLocalPolicyOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (void)_updateActiveFile;
- (void)_writeNSIHString:(id)a0 toActiveFile:(id)a1;

@end
