@class NSURL, SLHighlight;
@protocol NSSecureCoding, NSCopying;

@interface SWHighlight : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setSLHighlight:) SLHighlight *slHighlight;
@property (readonly, copy, nonatomic) id<NSSecureCoding, NSCopying> identifier;
@property (readonly, copy, nonatomic) NSURL *URL;

+ (unsigned char)highlightContentTypeForType:(unsigned char)a0;
+ (id)highlightsForSLHighlights:(id)a0;
+ (id)requiredSpotlightAttributeKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)timestamp;
- (id)stringIdentifier;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)attributions;
- (id)resourceUTI;
- (id)hideContextMenu;
- (id)replyContextMenu;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)isLocalResource;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forType:(unsigned char)a1 error:(id *)a2;
- (id)initWithSLHighlight:(id)a0;
- (BOOL)isSyndicatableMedia;
- (id)livePhotoComplementURL;

@end
