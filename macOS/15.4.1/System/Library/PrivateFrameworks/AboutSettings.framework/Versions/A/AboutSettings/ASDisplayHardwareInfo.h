@class NSString, NSBundle, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASDisplayHardwareInfo : NSObject

@property (retain) NSBundle *bundle;
@property (retain) NSMutableDictionary *gfxDisplayNames;
@property (retain) NSString *serialString;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSString *mainGfxDisplayName;
@property (retain) NSString *altGfxDisplayName;
@property (retain) NSArray *availableDisplays;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)localizedString:(id)a0;
- (id)getDisplaysList;
- (void)getDisplaysInfoWithCompletion:(id /* block */)a0;
- (id)gfxDisplayNameForDisplay:(id)a0;
- (id)localizedGfxName:(id)a0;
- (void)updateDisplayNotification:(id)a0;

@end
