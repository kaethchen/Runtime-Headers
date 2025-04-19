@class NSString, NSError, NSDate, AMSProcessInfo;

@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol>

@property double delay;
@property (retain) NSError *error;
@property (copy) NSString *profile;
@property (copy) NSString *profileVersion;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (retain) NSString *descriptionExtended;
@property (copy) id /* block */ dataSourceChangedHandler;
@property (copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)defaultValueForKey:(id)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 error:(id)a2 delay:(double)a3;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (void)valueForURLVariable:(id)a0 account:(id)a1 completion:(id /* block */)a2;

@end
