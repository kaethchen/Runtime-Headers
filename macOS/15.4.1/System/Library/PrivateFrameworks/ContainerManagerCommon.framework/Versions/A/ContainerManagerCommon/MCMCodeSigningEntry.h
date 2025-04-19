@class NSDictionary, NSArray;

@interface MCMCodeSigningEntry : NSObject

@property (retain, nonatomic) NSDictionary *codeSigningInfo;
@property (retain, nonatomic) NSArray *childBundleIdentifiers;
@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic, getter=isAdvanceCopy) BOOL advanceCopy;
@property (nonatomic, getter=isRegisteredByCaller) BOOL registeredByCaller;
@property (nonatomic, getter=isRegisteredByKernel) BOOL registeredByKernel;
@property (nonatomic) unsigned long long dataContainerClass;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithCodeSigningInfo:(id)a0;
- (id)initWithCodeSigningInfo:(id)a0 andDataContainerClass:(unsigned long long)a1;

@end
