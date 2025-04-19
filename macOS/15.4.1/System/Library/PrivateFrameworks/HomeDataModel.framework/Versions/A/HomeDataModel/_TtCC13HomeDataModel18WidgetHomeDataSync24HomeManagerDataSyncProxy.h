@class NSString;

@interface _TtCC13HomeDataModel18WidgetHomeDataSync24HomeManagerDataSyncProxy : NSObject <HMHomeManagerDelegate, HMHomeManagerDelegatePrivate> {
    void /* unknown type, empty encoding */ continuation;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)a0;
- (void)homeManagerDidUpdateDataSyncState:(id)a0;

@end
