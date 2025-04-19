@class NSString, TPSContentStatusEventsProvider, TPSBiomeEventsProvider;
@protocol TPSDEventsProviderManagerDelegate;

@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate> {
    BOOL _respondsToDidFinishQueryWithResults;
    BOOL _respondsToDidReceiveCallbackWithResult;
    TPSContentStatusEventsProvider *_contentStatusEventsProvider;
    TPSBiomeEventsProvider *_biomeEventsProvider;
}

@property (weak, nonatomic) id<TPSDEventsProviderManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)registerCallbackForEvents:(id)a0 type:(long long)a1;
- (long long)_dataTypeForDataProvider:(id)a0;
- (void)dataProvider:(id)a0 didFinishQueryWithResults:(id)a1;
- (void)dataProvider:(id)a0 didReceiveCallbackWithResult:(id)a1;
- (void)queryEvents:(id)a0 type:(long long)a1;
- (void)registerWakingCallbackForEvents:(id)a0 type:(long long)a1 clientIdentifier:(id)a2;
- (void)unregisterAllWakingEvents;

@end
