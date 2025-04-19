@class NSSet, NSArray;

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSSet *excludedEntityNames;
@property (copy) NSSet *excludedAttributeNames;
@property BOOL updateExistingObjects;
@property BOOL allowSavedAssetTypeChanges;
@property BOOL ignoreMissingSourceFiles;
@property BOOL ignoreMissingSourceFileURLs;
@property (copy) NSArray *keysForDeDupe;
@property unsigned int allowDeleteOfSavedAssetTypes;
@property BOOL skipContextSave;

+ (id)newTransferOptionsForPersonFromSystemToSyndication;
+ (id)newTransferOptionsForAssetsFromSyndicationToSystem;
+ (id)newTransferOptionsForFaceCropFromSyndicationToSystem;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_sortedEntityNamesAsString;

@end
