@class NSString, NSDictionary;

@interface AISSignOutContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ accountAltDSIDsByService;
    void /* unknown type, empty encoding */ machineIdToSignOut;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *accountAltDSIDsByService;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldRemoveDeviceUser;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *machineIdToSignOut;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWith:(id)a0 type:(long long)a1;
- (id)initWithAccountAltDSIDsByService:(id)a0;
- (id)initWithAltDSID:(id)a0 machineIdToSignOut:(id)a1 type:(long long)a2;
- (id)initWithAltDSID:(id)a0 type:(long long)a1;

@end
