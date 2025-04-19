@class NSString, NSArray, NSImage;

@interface MKLinkPreviewGuidesMetadata : MKLinkPreviewMetadata

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSString *publisherName;
@property (retain, nonatomic) NSImage *publisherIcon;

- (void).cxx_destruct;

@end
