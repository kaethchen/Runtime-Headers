@class CSSearchContext, NSArray, NSString, NSData;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long jobType;
@property (nonatomic) long long jobOptions;
@property (retain, nonatomic) NSArray *identifiersToReindex;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *excludedBundleIDs;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSArray *providerIdentifiers;
@property (retain, nonatomic) NSString *providerType;
@property (retain, nonatomic) NSString *extensionBundleID;
@property (retain, nonatomic) CSSearchContext *searchContext;
@property (retain, nonatomic) NSData *importData;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *fileType;
@property (copy, nonatomic) NSArray *fileAttributeSets;
@property (retain, nonatomic) NSArray *updatedItems;
@property long long updatedItemsMask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJobType:(long long)a0;
- (id)initWithJobType:(long long)a0 jobOptions:(long long)a1;
- (id)initWithXPCDict:(id)a0;
- (id)xpc_dictionary;

@end
