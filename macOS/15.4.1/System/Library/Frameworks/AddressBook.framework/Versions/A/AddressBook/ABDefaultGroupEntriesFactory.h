@class NSString;

@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property BOOL includeLastImport;
@property (copy) NSString *identifierOfAccountCreatingNewGroup;

- (void).cxx_destruct;
- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;

@end
