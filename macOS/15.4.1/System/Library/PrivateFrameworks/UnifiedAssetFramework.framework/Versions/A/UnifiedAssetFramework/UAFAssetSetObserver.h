@class NSString, NSSet, NSMutableSet, TRIClient, NSDate, NSMutableArray;

@interface UAFAssetSetObserver : NSObject

@property (retain, nonatomic) NSString *assetSetName;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) TRIClient *trial;
@property (retain, nonatomic) NSSet *namespaces;
@property (retain, nonatomic) NSDate *namespaceUpdateDate;
@property (retain, nonatomic) NSMutableSet *namespacesToIgnore;
@property (nonatomic) int uafNotifyToken;
@property (nonatomic) int maStartupNotifyToken;
@property (retain, nonatomic) NSMutableArray *namespaceTokens;

+ (id)getConcurrentQueue;
+ (id)getSerialQueue;
+ (int)listenForMAStartupNotification:(id)a0 updateHandler:(id /* block */)a1;
+ (int)listenForNotification:(id)a0 queue:(id)a1 updateHandler:(id /* block */)a2;
+ (int)listenForUAFNotificationsForAssetSet:(id)a0 forRoot:(BOOL)a1 queue:(id)a2 updateHandler:(id /* block */)a3;
+ (id)notificationForAssetSet:(id)a0 forRoot:(BOOL)a1;
+ (BOOL)sendUAFNotificationForAssetSet:(id)a0 forRoot:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithAssetSet:(id)a0 queue:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithAssetSet:(id)a0 configurationDirURLs:(id)a1 queue:(id)a2 updateHandler:(id /* block */)a3;
- (id)initWithAssetSet:(id)a0 ignoreMobileAssetStartup:(BOOL)a1 configurationDirURLs:(id)a2 queue:(id)a3 updateHandler:(id /* block */)a4;
- (BOOL)namespaceHasChanged:(id)a0;
- (void)resetNamespacesToIgnore:(id)a0;

@end
