@class NSSet, NSString, NSURL, CHPersonalizedSynthesisModelStatus;

@interface CHSynthesisStyleInventoryStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasAllDigits;
@property (readonly, nonatomic) long long styleSampleCount;
@property (readonly, nonatomic) long long samplesWithoutStylePredictionCount;
@property (readonly, nonatomic) NSSet *characterCoverage;
@property (readonly, nonatomic) NSURL *inventoryStorageURL;
@property (readonly, nonatomic) NSString *inventoryRelativePath;
@property (readonly, nonatomic) BOOL isPersonalizationAvailable;
@property (readonly, nonatomic) CHPersonalizedSynthesisModelStatus *personalizedSynthesisModelState;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsPersonalizationAvailable:(BOOL)a0 personalizedSynthesisModelState:(id)a1;
- (id)initWithIsPersonalizationAvailable:(BOOL)a0 personalizedSynthesisModelState:(id)a1 hasAllDigits:(BOOL)a2 styleSampleCount:(long long)a3 samplesWithoutStylePredictionCount:(long long)a4 characterCoverage:(id)a5 inventoryStorageURL:(id)a6 inventoryRelativePath:(id)a7;

@end
