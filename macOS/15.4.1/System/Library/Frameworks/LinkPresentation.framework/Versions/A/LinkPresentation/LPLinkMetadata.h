@class TUConversationActivity, _SWCollaborationMetadata, LPAudioMetadata, SYContentItem, NSMutableArray, NSString, LPAudio, LPARAsset, LPSpecializationMetadata, NSArray, NSColor, LPSourceApplicationMetadata, NSItemProvider, NSObject, LPARAssetMetadata, LPProductMetadata, LPVideo, LPIconMetadata, LPImage, LPImageMetadata, NSURL, LPVideoMetadata;
@protocol OS_dispatch_group;

@interface LPLinkMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    unsigned long long _asynchronousLoadDeferralTokenCount;
    NSMutableArray *_finishedDeferringAsynchronousLoadHandlers;
    BOOL _wasCopiedFromIncompleteMetadata;
    NSMutableArray *_pendingAsynchronousLoadHandlers;
    NSString *_title;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL _hasMedia;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *originalTitle;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSURL *relatedURL;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *creatorFacebookProfile;
@property (copy, nonatomic) NSString *creatorTwitterUsername;
@property (copy, nonatomic) NSString *twitterCard;
@property (nonatomic) BOOL usesActivityPub;
@property (copy, nonatomic) NSString *appleContentID;
@property (copy, nonatomic) NSString *appleSummary;
@property (copy, nonatomic) NSColor *themeColor;
@property (retain, nonatomic) LPARAsset *arAsset;
@property (retain, nonatomic) LPARAssetMetadata *arAssetMetadata;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPIconMetadata *iconMetadata;
@property (retain, nonatomic) LPImage *image;
@property (copy, nonatomic) NSArray *alternateImages;
@property (copy, nonatomic) NSArray *contentImages;
@property (copy, nonatomic) NSArray *contentImagesMetadata;
@property (retain, nonatomic) LPImageMetadata *imageMetadata;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) LPVideoMetadata *videoMetadata;
@property (retain, nonatomic) LPAudio *audio;
@property (retain, nonatomic) LPAudioMetadata *audioMetadata;
@property (copy, nonatomic) NSArray *arAssets;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *videos;
@property (copy, nonatomic) NSArray *streamingVideos;
@property (copy, nonatomic) NSArray *audios;
@property (copy, nonatomic) SYContentItem *originatingSynapseContentItem;
@property (copy, nonatomic) TUConversationActivity *conversationActivity;
@property (nonatomic) long long collaborationType;
@property (readonly, nonatomic) BOOL isGroupCollaboration;
@property (copy, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (copy, nonatomic) LPSourceApplicationMetadata *sourceApplication;
@property (copy, nonatomic) LPProductMetadata *product;
@property (copy, nonatomic) LPSpecializationMetadata *specialization;
@property (nonatomic, getter=_isIncomplete, setter=_setIncomplete:) BOOL _incomplete;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSItemProvider *iconProvider;
@property (retain, nonatomic) NSItemProvider *imageProvider;
@property (retain, nonatomic) NSItemProvider *videoProvider;
@property (retain, nonatomic) NSURL *remoteVideoURL;

+ (id)metadataWithDataRepresentation:(id)a0;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (id)metadataWithDataRepresentation:(id)a0 decodingType:(unsigned long long)a1;
+ (id)metadataWithDataRepresentationForLocalUseOnly:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)variants;
- (id)_initWithDictionary:(id)a0;
- (void)_loadAsynchronousFieldsWithUpdateHandler:(id /* block */)a0;
- (BOOL)_isCurrentlyLoadingOrIncomplete;
- (void)_addFinishedDeferringAsynchronousLoadHandler:(id /* block */)a0;
- (void)_copyPropertiesFrom:(id)a0 onlyUpgradeFields:(BOOL)a1;
- (void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)a0;
- (id /* block */)_createAsynchronousLoadDeferralToken;
- (void)_decodeAllImagesWithMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)_enumerateSubstitutableFields:(id /* block */)a0;
- (BOOL)_hasAnyAsynchronousFields;
- (id)_initWithConversationActivity:(id)a0;
- (id)_initWithSynapseContentItem:(id)a0;
- (void)_invokePendingAsynchronousLoadUpdateHandlers;
- (BOOL)_isCurrentlyLoading;
- (BOOL)_isDeferringAsynchronousLoads;
- (BOOL)_isEqualIgnoringURLs:(id)a0;
- (BOOL)_isLoadingAsynchronousFields;
- (BOOL)_loadAsynchronousFieldsWithLoadGroup:(id)a0;
- (void)_populateMetadataForBackwardCompatibility;
- (void)_reduceSizeByDroppingResourcesIfNeeded;
- (void)_resetIncompleteState;
- (BOOL)_wasCopiedFromIncompleteMetadata;
- (id)dataRepresentationForLocalLowFidelityUseOnly;
- (id)dataRepresentationForLocalUseOnly;
- (id)dataRepresentationWithEncodingType:(unsigned long long)a0 options:(unsigned long long)a1;

@end
