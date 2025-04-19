@class NSArray, NSPointerArray, NSIndexSet;

@interface MFIMAPStoreOperation : MFIMAPOperation

@property (copy, nonatomic) NSArray *objectsToSet;
@property (copy, nonatomic) NSArray *objectsToClear;
@property (retain, nonatomic) NSPointerArray *uids;
@property (readonly, copy, nonatomic) NSIndexSet *uidIndexSet;
@property (nonatomic) BOOL usesRealUids;

- (void).cxx_destruct;
- (void)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (id)_initWithObjectsToSet:(id)a0 objectsToClear:(id)a1 forUIDs:(id)a2 inMailbox:(id)a3;
- (void)serializeIntoData:(id)a0;

@end
