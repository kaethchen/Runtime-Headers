@class NSString, LPLinkMetadata;

@interface LinkMetadataPasteboardTypeOwner : NSObject <NSPasteboardTypeOwner>

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pasteboardTypeOwnerWithLinkMetadata:(id)a0;

- (void).cxx_destruct;
- (void)pasteboard:(id)a0 provideDataForType:(id)a1;
- (id)initWithLinkMetadata:(id)a0;

@end
