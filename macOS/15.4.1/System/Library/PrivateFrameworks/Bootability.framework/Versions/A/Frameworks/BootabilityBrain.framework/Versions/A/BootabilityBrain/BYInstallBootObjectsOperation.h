@interface BYInstallBootObjectsOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (BOOL)_installToVolume:(id)a0;

@end
