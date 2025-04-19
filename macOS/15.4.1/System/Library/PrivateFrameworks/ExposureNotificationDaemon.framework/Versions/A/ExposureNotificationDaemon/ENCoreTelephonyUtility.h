@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ENCoreTelephonyUtility : NSObject

@property (retain, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;
+ (id)countryCodeISOForMobileCountryCode:(id)a0;
+ (id)mobileCountryCodeForISO:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)countryCodeISOForMobileCountryCode:(id)a0;
- (id)currentMobileCountryCode;
- (id)currentPhoneNumbers;

@end
