@class NSString, NSDictionary, SUCoreDescriptor, SUMacControllerOverrides, NRDUpdateDaemonClientImpl, NSError;
@protocol NRDUpdateBrainClientInterface;

@interface SUMacControllerRecoveryOSEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *persistenceDescription;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) SUCoreDescriptor *descriptor;
@property (retain, nonatomic) SUCoreDescriptor *sfrDescriptor;
@property (retain, nonatomic) SUMacControllerOverrides *overrides;
@property (retain, nonatomic) id<NRDUpdateBrainClientInterface> nrdBrain;
@property (retain, nonatomic) NRDUpdateDaemonClientImpl *nrdDaemon;
@property (retain, nonatomic) NSDictionary *nrdUpdateAttributes;
@property (nonatomic) BOOL nrdUpdateRequired;
@property (retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) id /* block */ completion;
@property (readonly, retain, nonatomic) id /* block */ progressCallback;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getEvent;
- (id)getError;
- (id)getOverrides;
- (id)getDescriptor;
- (id)getNrdDaemon;
- (id)getNrdUpdateAttributes;
- (id)getSfrDescriptor;
- (id)initWithProgressCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)migrateNRDPropertiesFromEvent:(id)a0;

@end
