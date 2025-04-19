@class NSString, NSObject;
@protocol CCDonateServiceProvider;

@interface KVDonator : NSObject {
    unsigned short _cascadeItemType;
    NSString *_originAppId;
    NSString *_userId;
    NSObject<CCDonateServiceProvider> *_serviceProvider;
    BOOL _isExternalClient;
    unsigned long long _timeoutNanos;
}

+ (void)initialize;
+ (id)donatorWithServiceProvider:(id)a0 cascadeItemType:(unsigned short)a1 originAppId:(id)a2 userId:(id)a3 error:(id *)a4;
+ (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 error:(id *)a2;
+ (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 userId:(id)a2 error:(id *)a3;
+ (BOOL)_isXPCDonationEnabledForItemType:(long long)a0;
+ (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 deviceId:(id)a2 userId:(id)a3 error:(id *)a4;
+ (id)donatorWithServiceProvider:(id)a0 isExternalClient:(BOOL)a1 cascadeItemType:(unsigned short)a2 originAppId:(id)a3 userId:(id)a4 error:(id *)a5;

- (id)init;
- (void).cxx_destruct;
- (void)donateWithOptions:(unsigned short)a0 version:(unsigned long long)a1 validity:(id)a2 usingStream:(id /* block */)a3;
- (id)_descriptorsForItemType:(long long)a0 error:(id *)a1;
- (void)_donateWithOptions:(unsigned short)a0 version:(unsigned long long)a1 validity:(id)a2 usingStream:(id /* block */)a3;
- (void)donateWithOptions:(unsigned short)a0 usingStream:(id /* block */)a1;
- (id)initWithCascadeItemType:(unsigned short)a0 originAppId:(id)a1 userId:(id)a2 serviceProvider:(id)a3 isExternalClient:(BOOL)a4;

@end
