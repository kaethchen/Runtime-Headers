@interface BlastDoor._BlastDoorCKRecordID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ recordName;
    void /* unknown type, empty encoding */ zoneID;
    void /* unknown type, empty encoding */ RecordNameKey;
    void /* unknown type, empty encoding */ ZoneIDKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
