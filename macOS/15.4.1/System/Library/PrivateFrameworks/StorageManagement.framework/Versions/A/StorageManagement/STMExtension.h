@class NSString, STMRemoteExtensionContext, NSObject;
@protocol OS_dispatch_queue;

@interface STMExtension : NSObject <STMExtension> {
    NSObject<OS_dispatch_queue> *_queue;
    STMRemoteExtensionContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeFolder;
+ (id)homeVolume;
+ (id)localizedFileSize:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)categories;
- (id)confirmationTextForDelete:(id)a0;
- (id)confirmationTextForSummaryAction:(id)a0;
- (id)confirmationTextForTipAction:(id)a0;
- (id)customHeaderIcon;
- (id)deleteResourceItems:(id)a0;
- (id)localizedHeaderButtonTitle;
- (id)localizedHeaderMessage;
- (id)localizedRevealButtonTitle;
- (id)localizedStringForCategory:(id)a0;
- (id)managedPaths;
- (id)performHeaderAction;
- (id)performSummaryAction:(id)a0;
- (id)performTipAction:(id)a0;
- (void)processInputItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)representedApplication;
- (id)resourceItems;
- (BOOL)showItemPaths;
- (id)showResourceItems:(id)a0;
- (BOOL)showRevealButton;
- (BOOL)showsSummaryPanel;
- (id)tipItems;
- (long long)totalSpaceUsed;

@end
