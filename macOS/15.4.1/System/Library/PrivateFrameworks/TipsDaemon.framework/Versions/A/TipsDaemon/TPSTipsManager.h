@class NSString, NSArray, TPSMetadata, NSDictionary, TPSNotificationController, TPSTipStatusController, TPSExperiment, NSMutableArray, NSObject, TPSWidgetController;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate, TPSDeviceProfileDataSource>

@property (nonatomic) BOOL contextualTipsInactive;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;
@property (retain, nonatomic) TPSMetadata *metadata;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) NSDictionary *collectionsMap;
@property (retain, nonatomic) NSDictionary *tipsMap;
@property (copy, nonatomic) TPSExperiment *experiment;
@property (copy, nonatomic) NSString *rulesVersion;
@property (retain, nonatomic) TPSWidgetController *widgetController;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *cachedUserGuideMap;
@property (retain, nonatomic) NSString *lastFetchedLanguage;
@property (retain, nonatomic) TPSNotificationController *notificationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)experiment;
+ (BOOL)deviceLocalesContainLanguage:(id)a0;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (void)removeExperimentCache;
+ (void)removeWelcomeDocumentCache;
+ (void)removeWidgetUpdateDate;
+ (void)resetContentUpdatedNotificationDate;
+ (void)resetTipKitContentProcessingFlag;
+ (id)rulesVersion;
+ (BOOL)setTipKitContentProcessFlagIfNeeded;
+ (BOOL)supportsFeaturedCollection;

- (void).cxx_destruct;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)collectionStatusForCollection:(id)a0;
- (BOOL)isHardwareWelcome;
- (void)reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)widgetController:(id)a0 validForDocument:(id)a1 documentDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;
- (BOOL)isContentIdentifierHoldoutCamp:(id)a0;
- (void)_updateExperimentCache;
- (void)_updatePauseStatus:(BOOL)a0;
- (BOOL)checklistCollectionHasMinSuggestedTips:(id)a0 tipMap:(id)a1;
- (void)clearCachedUserGuides;
- (id)collectionSectionMapWithCollections:(id)a0 availableCollectionSections:(id)a1 collectionIdToCollectionLabelMap:(id)a2;
- (id)collectionSectionsFromCollectionMap:(id)a0 exclude:(id)a1;
- (id)collectionSectionsWithEligibleCollectionSections:(id)a0 collectionSectionMap:(id)a1 featuredCollection:(id)a2;
- (void)contentForVariantIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)contentFromOrigin:(BOOL)a0 processTipKitContent:(BOOL)a1 contextualEligibility:(BOOL)a2 widgetEligibility:(BOOL)a3 notificationEligibility:(BOOL)a4 preferredNotificationIdentifiers:(id)a5 shouldDeferBlock:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)contentWithMetaDictionary:(id)a0 documents:(id)a1 isRemote:(BOOL)a2 processTipKitContent:(BOOL)a3 contextualEligibility:(BOOL)a4 widgetEligibility:(BOOL)a5 notificationEligibility:(BOOL)a6 preferredNotificationIdentifiers:(id)a7 completionHandler:(id /* block */)a8;
- (id)featureCollectionFromCollectionMap:(id)a0 collectionOrder:(id)a1 tipMap:(id)a2;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 tipDeliveryInfoMap:(id)a6 deliveryInfoMap:(id)a7 completionHandler:(id /* block */)a8;
- (BOOL)hasWidgetDocument;
- (id)initWithTipStatusController:(id)a0;
- (BOOL)isPreconditionValidForIdentifier:(id)a0 preconditionDictionary:(id)a1;
- (void)postContentUpdatedNotificationIfNeeded;
- (void)processClientConditions:(id)a0 targetingCache:(id)a1 completionHandler:(id /* block */)a2;
- (void)processCollection:(id)a0 collectionsMap:(id)a1 ignoreSection:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)processTipDocumentsDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)processTipsDeliveryInfo:(id)a0 deliveryInfoMap:(id)a1 targetingCache:(id)a2 completionHandler:(id /* block */)a3;
- (id)processUserGuidesFromContentPackage:(id)a0;
- (BOOL)shouldPerformWidgetUpdate;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (id)updateDocumentContent:(id)a0 withClientConditions:(id)a1 checklistCompletedConditions:(id)a2 usingDictionary:(id)a3;
- (void)updateSupplementalIdentifiersForIdentifier:(id)a0 fromDictionary:(id)a1;
- (id)welcomeCollectionFromContentPackage:(id)a0;
- (id)welcomeDocumentFromContentPackage:(id)a0;

@end
