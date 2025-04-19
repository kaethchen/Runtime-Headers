@interface BlastDoor._BlastDoorHKProfileIdentifier : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ UuidKey;
    void /* unknown type, empty encoding */ TypeKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
