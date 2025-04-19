@class NSString, NSArray, SLCollaborationFooterViewModel, NSAppearance, NSSharingCollaborationModeRestriction, NSDictionary, NSNumber, _SWCollaborationShareOptions;

@interface SHKShareSheetViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *headerMetadata;
@property (copy, nonatomic) NSArray *headerURLItems;
@property (copy, nonatomic) NSDictionary *sandboxExtensionsByfileURLPath;
@property (nonatomic) unsigned long long supportedCollaborationModes;
@property (nonatomic, getter=isCollaborationMode) BOOL collaborationMode;
@property (copy, nonatomic) NSSharingCollaborationModeRestriction *collaborationModeRestriction;
@property (copy, nonatomic) NSString *collaborationModeTitle;
@property (copy, nonatomic) NSNumber *collaborationType;
@property (retain, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (nonatomic) BOOL shareOptionsAreReadOnly;
@property (copy, nonatomic) NSString *hostProcessBundleID;
@property (retain, nonatomic) NSAppearance *hostProcessAppearance;
@property (copy, nonatomic) NSArray *transports;
@property (copy, nonatomic) NSArray *collaborativeTransports;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *collaborativeActions;
@property (retain, nonatomic) SLCollaborationFooterViewModel *footerViewModel;
@property (nonatomic, getter=isPeopleSuggestionsSupported) BOOL peopleSuggestionsSupported;
@property (nonatomic) BOOL finishedLoadingShareOptions;
@property (nonatomic) BOOL finishedLoadingHeaderMetadata;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
