@interface PKUpdateCambriaCacheOperation : PKInstallOperation

+ (BOOL)cambriaAvailable;

- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
