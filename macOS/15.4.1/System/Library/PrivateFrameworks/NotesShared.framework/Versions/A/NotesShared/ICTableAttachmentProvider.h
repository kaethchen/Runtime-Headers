@class NSManagedObjectContext, ICCRTTCompatibleDocument, NSMapTable, ICTable, ICAttachment;
@protocol ICTableAttachmentProviderDelegate;

@interface ICTableAttachmentProvider : NSObject

@property (class, readonly) NSMapTable *providerMapping;
@property (class, readonly) NSMapTable *mergeNotificationRegister;

@property (retain, nonatomic) ICAttachment *backgroundAttachment;
@property (readonly, nonatomic) ICCRTTCompatibleDocument *tableDoc;
@property (weak, nonatomic) NSManagedObjectContext *overriddenBackgroundMOC;
@property (weak, nonatomic) id<ICTableAttachmentProviderDelegate> delegate;
@property (weak, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) ICTable *table;
@property (nonatomic) BOOL isBeingEditedLocallyOnDevice;
@property (nonatomic) BOOL needsToUpdateTableFromBackgroundAttachment;

+ (id)defaultBackgroundManagedObjectContext;
+ (void)notifyProviderForRefreshToAttachment:(id)a0;
+ (void)saveAttachmentOnMainThread:(id)a0;
+ (id)sharedProviderForAttachment:(id)a0;

- (void).cxx_destruct;
- (id)backgroundManagedObjectContext;
- (void)didRefreshBackgroundTableAttachment:(id)a0;
- (void)notifyDelegateTableAttachmentDidMerge;
- (void)notifyDelegateTableAttachmentWillMerge;
- (void)refreshBackgroundAttachment;
- (void)setTableFromDocument:(id)a0;
- (void)updateTableFromMOC;

@end
