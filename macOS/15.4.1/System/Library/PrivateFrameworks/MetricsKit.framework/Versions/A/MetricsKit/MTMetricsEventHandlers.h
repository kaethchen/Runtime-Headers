@class MTAccountEventHandler, MTExitEventHandler, MTDialogEventHandler, MTMediaEventHandler, MTFlexibleEventHandler, MTSearchEventHandler, MTPageEventHandler, MTClickEventHandler, MTEnterEventHandler, MTImpressionsEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers

@property (readonly) MTClickEventHandler *click;
@property (readonly) MTEnterEventHandler *enter;
@property (readonly) MTExitEventHandler *exit;
@property (readonly) MTFlexibleEventHandler *flexible;
@property (readonly) MTImpressionsEventHandler *impressions;
@property (readonly) MTPageEventHandler *page;
@property (readonly) MTSearchEventHandler *search;
@property (readonly) MTAccountEventHandler *account;
@property (readonly) MTDialogEventHandler *dialog;
@property (readonly) MTMediaEventHandler *media;

- (void).cxx_destruct;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;

@end
