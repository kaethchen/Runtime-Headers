@class NSArray, AMPLibModelKind;

@interface AMPLibRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMPLibModelKind *libModelItemKind;
@property (retain, nonatomic) AMPLibModelKind *libModelSectionKind;
@property (copy, nonatomic) NSArray *allowedItemIdentifierSets;
@property (copy, nonatomic) NSArray *allowedSectionIdentifierSets;
@property (nonatomic) unsigned long long mediaDomains;
@property (nonatomic) unsigned long long mediaKinds;
@property (nonatomic) unsigned long long deviceCapabilities;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic) BOOL needsTitledSections;
@property (nonatomic) BOOL needsAlbumIDs;
@property (copy, nonatomic) NSArray *itemPropertyFilters;
@property (copy, nonatomic) NSArray *sectionPropertyFilters;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithDomains:(unsigned long long)a0 mediaKinds:(unsigned long long)a1 deviceCapabilities:(unsigned long long)a2;

@end
