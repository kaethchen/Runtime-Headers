@interface BlastDoor._BlastDoorCKRecordZoneID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ zoneName;
    void /* unknown type, empty encoding */ ownerName;
    void /* unknown type, empty encoding */ anonymousCKUserID;
    void /* unknown type, empty encoding */ databaseScope;
    void /* unknown type, empty encoding */ ZoneNameKey;
    void /* unknown type, empty encoding */ OwnerNameKey;
    void /* unknown type, empty encoding */ AnonymousCKUserIDKey;
    void /* unknown type, empty encoding */ DatabaseScopeKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
