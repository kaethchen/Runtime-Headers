@class NSArray;

@interface CNContactDiff : NSObject

@property (readonly, copy) NSArray *updates;

+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;
+ (id)diffContact:(id)a0 to:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)hasExternalImageURIBeenChangedForContact:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)a0;
- (void)applyToABCDContact:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToMutableContacts:(id)a0 withIdentifierMap:(id)a1;
- (id)contactByApplyingUpdatesToContact:(id)a0;
- (void)resetExternalImageURIForContact:(id)a0;

@end
