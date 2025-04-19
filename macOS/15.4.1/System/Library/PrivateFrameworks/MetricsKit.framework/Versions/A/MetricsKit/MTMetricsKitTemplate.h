@class MTUtils, NSString, MTEventHandlers, MTSystem, MTConfig;
@protocol MTDelegatePackage;

@interface MTMetricsKitTemplate : NSObject

@property (retain) NSString *topic;
@property (retain) MTConfig *config;
@property (retain) MTEventHandlers *eventHandlers;
@property (retain) MTSystem *system;
@property (retain) MTUtils *utils;
@property (retain) id<MTDelegatePackage> delegatePackage;

+ (id)kitWithTopic:(id)a0 amsBag:(id)a1;
+ (id)kitWithTopic:(id)a0 bagProfile:(id)a1 profileVersion:(id)a2;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)sampling;
- (id)initWithTopic:(id)a0 bagProfile:(id)a1 profileVersion:(id)a2;
- (id)initWithTopic:(id)a0 delegatePackage:(id)a1;
- (id)metricsDataWithEventHandlerName:(id)a0 eventData:(id)a1;
- (id)metricsDataWithEventHandlerName:(id)a0 fields:(id)a1;
- (id)metricsDataWithEventHandlerName:(id)a0 pageData:(id)a1 eventData:(id)a2;
- (id)metricsDataWithEventHandlerName:(id)a0 pageData:(id)a1 fields:(id)a2;
- (id)metricsDataWithEventHandlerName:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 eventData:(id)a4;
- (id)metricsDataWithEventHandlerName:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 fields:(id)a4;

@end
