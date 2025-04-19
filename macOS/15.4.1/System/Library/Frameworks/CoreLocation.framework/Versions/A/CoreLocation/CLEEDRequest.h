@class NSString, NSUUID, NSDate;

@interface CLEEDRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *partnerID;
@property (readonly, retain, nonatomic) NSString *geofenceID;
@property (nonatomic) long long state;
@property (nonatomic) long long requestStatusAtFirstUserResponse;
@property (nonatomic) long long requestTransmissionTime;
@property (nonatomic) double requestReceivedTime;
@property (nonatomic) double receivedTimeToFirstUserResponse;
@property (nonatomic) double receivedTimeToAcceptTime;
@property (nonatomic) long long numMediaSelectIterations;
@property (readonly, retain, nonatomic) NSUUID *ID;
@property (readonly, retain, nonatomic) NSString *psapID;
@property (readonly, retain, nonatomic) NSDate *requestDate;
@property (readonly, nonatomic) long long type;

+ (id)createRequestFromCachedDict:(id)a0 error:(long long *)a1;
+ (id)createRequestFromDict:(id)a0 baseURL:(id)a1 sessionID:(id)a2 partnerAdrPublicKeyData:(id)a3 deviceSessionPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a4 deviceSessionSecret:(id)a5 error:(long long *)a6;
+ (id)getCallIDFromDict:(id)a0;
+ (id)getDecryptedControlRequestData:(id)a0 sessionID:(id)a1 partnerAdrPublicKeyData:(id)a2 deviceSessionPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3 deviceSessionSecret:(id)a4 combinedSecret:(id *)a5 error:(long long *)a6;
+ (id)getDecryptedPartnerSessionSecret:(id)a0 sessionID:(id)a1 partnerID:(id)a2 partnerAdrPublicKeyData:(id)a3 deviceSessionPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a4;
+ (id)getDecryptedRequestDict:(id)a0 requestID:(id)a1 combinedSecret:(id)a2 sharedInfoPrefix:(id)a3;
+ (id)getPartnerIDFromDict:(id)a0;
+ (long long)getSessionStartTimeFromDict:(id)a0;
+ (id)getSharedInfoPrefixFromSessionID:(id)a0 partnerID:(id)a1 partnerAdrPublicKeyData:(id)a2 deviceSessionPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3;
+ (long long)requestTypeFromDict:(id)a0;
+ (id)toCLEEDRequestString:(long long)a0;
+ (long long)toCLEEDRequestType:(id)a0;
+ (id)toEEDControlResponseStatus:(long long)a0;
+ (BOOL)validateDerivedSessionSecrets:(id)a0 sharedInfoPrefix:(id)a1 partnerKeyConfirmation:(id)a2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(long long *)a1;
- (void)updateDurationInformationForCA:(BOOL)a0;
- (id)getRequestDict;
- (id)getResponseDataDictionary;
- (id)initWithDictionary:(id)a0 decryptedRequestData:(id)a1 baseURL:(id)a2 error:(long long *)a3;
- (id)initWithID:(id)a0 psapID:(id)a1 partnerID:(id)a2 geofenceID:(id)a3 requestDate:(id)a4 requestType:(long long)a5 state:(long long)a6;

@end
