@class NSArray, NSNumber, NSString;

@interface FPQueryEnumerationSettings : FPEnumerationSettings

@property (copy) NSArray *allowedProviders;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *tagIdentifier;
@property (copy) NSArray *excludedParentOIDs;
@property (nonatomic) BOOL allowSemanticSearchResults;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
