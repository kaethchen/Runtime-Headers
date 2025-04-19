@class CNReplaySubject, NSString, NSObject, CoreTelephonyClient;
@protocol CNCancelable, OS_dispatch_queue, CNDCoreTelephonyServices;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor>

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, nonatomic) id<CNDCoreTelephonyServices> coreTelephonyServices;
@property (readonly, nonatomic) CNReplaySubject *subject;
@property (retain, nonatomic) id<CNCancelable> subjectToken;
@property (nonatomic) struct __CTServerConnection { } *serverConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)a0 services:(id)a1 serverConnection:(struct __CTServerConnection { } *)a2;
+ (void)infoWithClient:(id)a0 completion:(id /* block */)a1;
+ (id)infoWithCompletion:(id /* block */)a0;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)a0 serverConnection:(struct __CTServerConnection { } *)a1;
+ (id)phoneNumberObservableWithCoreTelephonyClient:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)nts_configureSubjectIfNecessary;
- (id)addInfoChangeHandler:(id /* block */)a0;
- (void)configureStateIfNecessary;
- (id)initWithCoreTelephonyClient:(id)a0 services:(id)a1;
- (void)nts_configureConnectionIfNecessary;

@end
