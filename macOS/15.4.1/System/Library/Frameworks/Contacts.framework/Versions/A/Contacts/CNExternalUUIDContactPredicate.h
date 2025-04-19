@class NSString, NSArray;

@interface CNExternalUUIDContactPredicate : CNPredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *externalUUIDs;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (BOOL)_inputsAreValid;
- (id)initWithExternalUUIDs:(id)a0;

@end
