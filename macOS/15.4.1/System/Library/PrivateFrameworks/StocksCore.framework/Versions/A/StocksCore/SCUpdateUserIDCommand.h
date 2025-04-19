@interface SCUpdateUserIDCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ userID;
    void /* unknown type, empty encoding */ overwrite;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;

@end
