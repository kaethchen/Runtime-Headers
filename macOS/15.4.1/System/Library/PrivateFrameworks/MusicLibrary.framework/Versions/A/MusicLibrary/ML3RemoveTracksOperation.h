@interface ML3RemoveTracksOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id *)a0;

@end
