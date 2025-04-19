@interface BlastDoor.PersistenceEventSecureCoding : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ persistenceEvent;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
