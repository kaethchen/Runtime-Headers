@class NSString, NSObject;
@protocol OS_os_log;

@interface MUIOpenWithApplicationHelper : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openWithMenuItemForAttachmentURLs:(id)a0;
+ (id)openWithMenuItemForAttachmentURLs:(id)a0 selectionHandler:(id /* block */)a1;


@end
