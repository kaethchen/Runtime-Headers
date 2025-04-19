@interface SUMacControllerEventReporter : NSObject

+ (void)flushEvents;
+ (id)eventResultStringFromError:(id)a0;
+ (id)newBaseEventAttributesForClientRequest:(id)a0 descriptor:(id)a1;
+ (id)newEvent:(id)a0 clientRequest:(id)a1 updateUUID:(id)a2 descriptor:(id)a3 error:(id)a4 success:(BOOL)a5;
+ (void)reportOTAAbandonedEventWithClientRequest:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 error:(id)a3 success:(BOOL)a4;
+ (void)reportOTAAvailableEventWithClientRequest:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 error:(id)a3 success:(BOOL)a4;
+ (void)reportOTADownloadedEventWithClientRequest:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 error:(id)a3 success:(BOOL)a4;
+ (void)reportOTAInstallingEventWithClientRequest:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 error:(id)a3 success:(BOOL)a4;
+ (void)reportOTAReadyEventWithClientRequest:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 error:(id)a3 success:(BOOL)a4;
+ (void)sendEventWithAttributes:(id)a0;

@end
