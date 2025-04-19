@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject <BSDescriptionStreamable> {
    NSString *_loggingIdentifier;
    CHSChronoServicesConnection *_connection;
    unsigned long long _activationState;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithIdentifier:(id)a0;
- (void)deactivate;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_connectionCopy;
- (unsigned long long)_activationState;
- (void)_connectionCreateOrUpdateConfigurations;
- (void)_connectionRemoveHost;
- (void)_connectionUpdateActivationState;
- (id)_initWithHost:(id)a0;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 activationState:(unsigned long long)a2 connection:(id)a3;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 active:(BOOL)a2;

@end
