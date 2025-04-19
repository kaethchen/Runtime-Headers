@class NSString, _AMMailRichText;

@interface _AMMailOutgoingMessage : SBObject

@property (copy) NSString *sender;
@property (copy) NSString *subject;
@property (copy) _AMMailRichText *content;
@property BOOL visible;
@property (copy) id messageSignature;
@property (copy) NSString *htmlContent;
@property (copy) NSString *vcardPath;

- (id)recipients;
- (void)delete;
- (BOOL)send;
- (void)moveTo:(id)a0;
- (long long)id;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
