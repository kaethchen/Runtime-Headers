@class NSString, NSArray, NSURL, NSImage;

@interface NSCloudSharingPanel : NSObject

@property id delegate;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *primaryMessageTemplate;
@property (copy) NSString *primaryMessageTemplateForSharedDocument;
@property (copy) NSString *secondaryMessage;
@property (copy) NSString *secondaryMessageForSharedDocument;
@property (copy) NSString *shareButtonLabel;
@property BOOL documentHasPassword;
@property (copy) NSArray *servicesToCustomize;
@property (copy) NSURL *ubiquitousDocumentURL;
@property (retain) NSImage *thumbnailImage;

+ (id)panel;

- (void)dealloc;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
