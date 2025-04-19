@class NSString, NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate <CNCDContainerScopedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)emailAddressSubpredicateWithHandles:(id)a0;
+ (id)phoneNumberSubpredicateWithHandles:(id)a0;
+ (id)subpredicatesWithClassification:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (id)cn_coreDataExchangePredicate;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)initWithHandleStrings:(id)a0;
- (id)initWithHandleStrings:(id)a0 containerIdentifiers:(id)a1;

@end
