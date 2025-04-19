@interface LSPlugInQueryAll : LSPlugInQuery

- (BOOL)_remoteResolutionIsExpensive;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;

@end
