@class NSString, NSImage, NSURL, NSData;

@interface SHKMailCollaborationShareItem : NSObject <NSSharingServiceItemSource, SHKShareItem>

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NSString *shareItemType;
@property (readonly, retain) NSURL *shareItemURL;
@property (readonly, retain) NSString *shareItemString;
@property (readonly, retain) NSImage *shareItemImage;
@property (readonly, retain) NSData *shareItemData;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 subjectForSharingServiceName:(id)a1;
- (id)sharingServicePickerPlaceholderItem:(id)a0;
- (id)initWithSubject:(id)a0 body:(id)a1;

@end
