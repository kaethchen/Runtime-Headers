@class NSArray, NSDictionary, NSString, NSData, NSNumber;

@interface DESRecipe : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *attachmentSignatures;
@property (copy, nonatomic) NSArray *attachmentPaths;
@property (readonly, copy, nonatomic) NSDictionary *parametersUsed;
@property (copy, nonatomic) NSString *recipeID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL transportIsDedisco;
@property (readonly, nonatomic) NSString *privacyIdentifier;
@property (readonly, nonatomic) NSString *privacyIdentifierExt;
@property (readonly, nonatomic) NSDictionary *predicate;
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo;
@property (readonly, copy, nonatomic) NSData *certificate;
@property (readonly, nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (readonly, nonatomic) BOOL useSparsification;
@property (readonly, nonatomic) BOOL useAggregatableMetadata;
@property (readonly, nonatomic) BOOL useAdaptiveClipping;
@property (readonly, nonatomic) BOOL useFederatedBuffer;
@property (readonly, nonatomic) BOOL isFederatedBufferStaled;
@property (readonly, nonatomic) NSNumber *approximateStaleness;
@property (readonly, nonatomic) NSNumber *federatedBufferDownScalingFactor;
@property (readonly, nonatomic) NSNumber *maxNorm;
@property (readonly, nonatomic) NSNumber *normBinCount;

+ (BOOL)_hasValidClippingBounds:(id)a0 matchValidNumChunks:(id)a1;
+ (BOOL)pluginShouldAddNoiseAndEncryptResult:(id)a0;
+ (BOOL)transportIsDedisco:(id)a0;
+ (BOOL)useAdaptiveClipping:(id)a0;
+ (BOOL)useAggregatableMetadata:(id)a0;
+ (BOOL)useSparsification:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAssetURL:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)_initWithRecipeResponse:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)_initWithRecipeUserInfo:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2;
- (id)_initWithRecipeUserInfo:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2 predicate:(id)a3;
- (id)_initWithRecipeUserInfo:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2 predicate:(id)a3 attachments:(id)a4;
- (id)_inithWithContentsOfFile:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)haruspexKeyWithError:(id *)a0;
- (BOOL)isFederatedBufferStaled:(id)a0;

@end
