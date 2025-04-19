@interface IMAPFetchUIDCommand : IMAPFetchCommand

- (BOOL)_isLegalRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)commandTypeString;
- (BOOL)shouldSendAgainOnError;

@end
