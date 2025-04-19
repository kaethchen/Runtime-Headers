@class CHPluginHelper, NSArray;
@protocol FTDockTileHelperDelegate, FTMenuItemsProvider;

@interface FTDockTileHelper : NSObject

@property (retain, nonatomic) CHPluginHelper *chPluginHelper;
@property (retain, nonatomic) id<FTMenuItemsProvider> menuItemProvider;
@property (weak, nonatomic) id<FTDockTileHelperDelegate> delegate;
@property (copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) id<FTMenuItemsProvider> menuItemsProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)limitingCallTypes;
- (void)unreadCallCountWithCompletionHandler:(id /* block */)a0;
- (void)callCapabilityDidChange:(id)a0;
- (void)callCountChanged:(id)a0;
- (id)fetchMenu;
- (id)initWithMenuItemsProvider:(id)a0;
- (void)updateCalls;

@end
