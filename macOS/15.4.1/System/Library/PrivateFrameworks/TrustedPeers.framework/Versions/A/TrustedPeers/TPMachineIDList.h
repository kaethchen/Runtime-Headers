@class NSArray;

@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)entryFor:(id)a0;
- (id)machineIDsInStatus:(unsigned long long)a0;

@end
