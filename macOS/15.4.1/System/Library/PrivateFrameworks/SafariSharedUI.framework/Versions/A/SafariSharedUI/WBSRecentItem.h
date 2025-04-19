@class LPLinkMetadata, NSString, NSImage, NSURL, NSDate, NSItemProvider;
@protocol WBSCloudTabProvider, WBSCloudTabItem, NSCopying, NSObject;

@interface WBSRecentItem : NSObject

@property (nonatomic) long long metadataState;
@property (readonly, nonatomic) id<NSObject, NSCopying> identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (retain, nonatomic) NSItemProvider *imageProvider;
@property (retain, nonatomic) id<WBSCloudTabItem> cloudTab;
@property (retain, nonatomic) id<WBSCloudTabProvider> device;
@property (readonly, copy, nonatomic) NSString *deviceLocationDescription;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 url:(id)a1 date:(id)a2;

@end
