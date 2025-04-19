@class NSObject;
@protocol CCDonateServiceProvider;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<CCDonateServiceProvider> *_serviceProvider;
}

- (void).cxx_destruct;
- (id)donatorWithCascadeItemType:(unsigned short)a0 originAppId:(id)a1 error:(id *)a2;

@end
