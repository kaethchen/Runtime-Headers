@class NSString;

@interface ATXSettingsActionsLayoutSelector : NSObject <ATXLayoutSelectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;

@end
