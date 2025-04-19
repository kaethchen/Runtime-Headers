@interface WTInputAnalytics : NSObject

+ (void)sendSignal:(id)a0 toChannel:(id)a1 withPayload:(id)a2;
+ (void)sendWritingToolsSignal:(id)a0 payload:(id)a1;
+ (id)getIAChannelWritingTools;
+ (id)getIAPayloadKeyWritingToolsUI;
+ (id)getIASignalWritingToolsPanelRequested;
+ (id)getIAPayloadValueWritingToolsUIAffordance;

@end
