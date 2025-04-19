@class NSArray, NSURL, NSString;

@interface CNUIVCardSharingItem : NSObject <NSPasteboardWriting>

@property (retain) NSArray *contacts;
@property (retain) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)createEmptyTemporaryFileForContacts:(id)a0;
+ (id)itemWithContacts:(id)a0;

- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)initWithContacts:(id)a0 url:(id)a1;
- (void)serializeVCard;

@end
