@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;
@property (readonly, copy) NSString *memberHashedDSID;
@property (readonly) BOOL localFallback;
@property (readonly) unsigned long long requestedSize;
@property double requiredWidth;
@property double requiredHeight;
@property double monogramDiameter;
@property BOOL useMonogramAsLastResort;
@property (copy) NSString *fullname;
@property (copy) NSString *emailAddress;
@property (copy) NSString *phoneNumber;

- (id)init;
- (void).cxx_destruct;
- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithFamilyMemberDSID:(id)a0 size:(unsigned long long)a1 localFallback:(BOOL)a2 connectionProvider:(id)a3;
- (id)initWithConnectionProvider:(id)a0;
- (id)initWithFamilyMemberDSID:(id)a0 size:(unsigned long long)a1 localFallback:(BOOL)a2;
- (id)initWithFamilyMemberHashedDSID:(id)a0 size:(unsigned long long)a1 localFallback:(BOOL)a2;
- (id)initWithFamilyMemberHashedDSID:(id)a0 size:(unsigned long long)a1 localFallback:(BOOL)a2 connectionProvider:(id)a3;

@end
