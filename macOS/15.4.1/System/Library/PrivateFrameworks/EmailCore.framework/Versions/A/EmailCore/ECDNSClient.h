@class NSString;

@interface ECDNSClient : NSObject <ECDKIMPublicKeySource, ECDMARCRecordSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_txtRecordsForDomain:(id)a0 error:(out id *)a1;
- (id)getDMARCRecordsFromDomain:(id)a0 error:(out id *)a1;
- (void)getPublicKeyRecordsFromDomain:(id)a0 withSelector:(id)a1 completionHandler:(id /* block */)a2;

@end
