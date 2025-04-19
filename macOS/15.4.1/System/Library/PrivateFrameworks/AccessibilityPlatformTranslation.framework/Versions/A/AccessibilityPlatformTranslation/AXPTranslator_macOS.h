@class NSMutableDictionary;

@interface AXPTranslator_macOS : AXPTranslator

@property (retain, nonatomic) NSMutableDictionary *objectIDToTranslationObjMapping;
@property (copy, nonatomic) id /* block */ zoomTriggerTestingCallback;
@property (copy, nonatomic) id /* block */ appNotificationTestingCallback;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id /* block */)attributedStringConversionBlock;
- (id)processHitTest:(id)a0;
- (id)platformElementFromTranslation:(id)a0;
- (void)_processAppAccessibilityNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;
- (void)_processZoomFocusNotificationWithData:(id)a0 associatedObject:(id)a1;
- (void)enableAccessibility;
- (id)processAXTreeElements:(id)a0;
- (id)processActionRequest:(id)a0;
- (id)processApplicationObject:(id)a0;
- (id)processAttributeRequest:(id)a0;
- (id)processFrontMostApp:(id)a0;
- (id)processMultipleAttributeRequest:(id)a0;
- (void)processPlatformAXTreeDump:(id)a0;
- (void)processPlatformNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;
- (id)remotePlatformElementFromTranslation:(id)a0 forPid:(int)a1;

@end
